#include "gps.hpp"

int main()
{
    cout << "                                                              " << endl;
    cout << " $$$$$$\\       $$\\ $$$$$$\\         $$$$$$\\ $$$$$$$\\  $$$$$$\\  " << endl;
    cout << "$$  __$$\\     $$  $$  __$$\\       $$  __$$\\$$  __$$\\$$  __$$\\ " << endl;
    cout << "$$ /  \\__|   $$  /$$ /  $$ |      $$ /  \\__$$ |  $$ $$ /  \\__|" << endl;
    cout << "$$ |        $$  / $$$$$$$$ |      $$ |$$$$\\$$$$$$$  \\$$$$$$\\  " << endl;
    cout << "$$ |       $$  /  $$  __$$ |      $$ |\\_$$ $$  ____/ \\____$$\\ " << endl;
    cout << "$$ |  $$\\ $$  /   $$ |  $$ |      $$ |  $$ $$ |     $$\\   $$ |" << endl;
    cout << "\\$$$$$$  $$  /    $$ |  $$ |      \\$$$$$$  $$ |     \\$$$$$$  |" << endl;
    cout << " \\______/\\__/     \\__|  \\__|       \\______/\\__|      \\______/ " << endl;
    cout << "                                                              " << endl;
    cout << "                                                              " << endl;
    cout << "                       alu0101351728                                  " << endl;
    cout << "                                                              " << endl;
    cout << "                                                              " << endl;
    GPS obj;
    int tap = 0, pasos = 0;
    cout << "Inserte ID del satélite a utilizar: ";
    cin >> tap;
    cout << endl;
    cout << "¿Cuántos pasos se llevarán a cabo?: ";
    cin >> pasos;
    obj.set_turnos(pasos);
    obj.initialize_vectors();
    obj.set_taps(tap);
    obj.algoritmo();
}