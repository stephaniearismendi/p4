#include <iostream>
#include <vector>

using namespace std;

class GPS
{
private:
    int vector_uno[10];
    int vector_dos[10];
    vector <int> vector_final;
    int n_turnos_;
    int taps_[2];

public:
    GPS(){};
    ~GPS(){};
    void set_turnos(int turnos) { n_turnos_ = turnos; }
    void initialize_vectors();
    void set_taps(int prn_id);
    void algoritmo();
    void desplazar_vector(int entra, int vector);
    void imprimir_vectores(int vector[10]);
    int xor_function(int num);
};
