#include "gps.hpp"

/**
 * @brief inicializamos ambos vectores para que
 * vayan del uno al diez
 */
void GPS::initialize_vectors()
{
    for (int i = 0; i < 10; i++)
    {
        vector_uno[i] = 1;
        vector_dos[i] = 1;
    }
}

int GPS::xor_function(int num)
{
    if (num % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void GPS::algoritmo()
{
    int sum_vector_1 = 0;
    int sum_vector_2 = 0;
    int xor_2 = 0;
    cout << endl;
    cout << "LFSR1: ";
    imprimir_vectores(vector_uno);
    cout << "   Realimentación: " << 0;
    cout << "    »»»»»     LFSR2: ";
    imprimir_vectores(vector_dos);
    cout << "   Realimentación: " << 0;
    cout << endl;
    vector_final.resize(n_turnos_);
    for (int i = 0; i < n_turnos_ - 1; i++)
    {
        sum_vector_1 = xor_function(vector_uno[2] + vector_uno[9]);
        xor_2 = xor_function(vector_dos[1] + vector_dos[5]);
        vector_final[i] = xor_function(xor_2 + vector_uno[9]);
        desplazar_vector(sum_vector_1, 1);
        cout << "LFSR1: ";
        imprimir_vectores(vector_uno);
        cout << "   Realimentación: " << sum_vector_1;
        sum_vector_2 = xor_function(vector_dos[1] + vector_dos[2] + vector_dos[5] + vector_dos[7] + vector_dos[8] + vector_dos[9]);
        desplazar_vector(sum_vector_2, 2);
        cout << "    »»»»»     LFSR2: ";
        imprimir_vectores(vector_dos);
        cout << "   Realimentación: " << sum_vector_2;
        cout << endl;
    }
    cout << endl;
    cout << "vector final: [ ";
    for (int i = 0; i < vector_final.size(); i++)
    {
        cout << " " << vector_final[i];
    }
    cout << " ] "<< endl;
    cout << endl;
}

void GPS::desplazar_vector(int entra, int vector)
{
    int aux1 = 0;
    if (vector == 1)
    {
        for (int i = 9; i >= 0; i--)
        {
            vector_uno[i] = vector_uno[i - 1];
        }
        vector_uno[0] = entra;
    }
    else if (vector == 2)
    {
        for (int i = 9; i >= 0; i--)
        {
            vector_dos[i] = vector_dos[i - 1];
        }
        vector_dos[0] = entra;
    }
}

void GPS::imprimir_vectores(int vector[10])
{
    for (int i = 0; i < 10; i++)
    {
        cout << vector[i] << " ";
    }
}