#include <iostream>

using namespace std;

int main(){
    int numeros[5] = {10, 20, 30, 40, 50};

    cout << "Primeiro Elemento: " << numeros[0] << endl;
    cout << "Último Elemento: " << numeros[4] << endl;
    cout << "Todos os Elementos: ";

    for(int i = 0; i < 5; i++){
        cout << numeros[i] << " ";
    }

    cout << endl;

    numeros[2] = 99;
    cout << "Elemento Modificado: " << numeros[2] << endl;
    return 0;
}