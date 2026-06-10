#include <iostream>
#include <string>

using namespace std;

int main() {
/*void trocar (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
*/
/*int fatorial (int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorial(n - 1);
}*/



    /*int n;
    unsigned long long fatorial = 1; // 'unsigned long long' serve para aguentar números grandes

    cout << "Digite um numero inteiro positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "Erro! Nao existe fatorial de numero negativo." << endl;
    } else {
        // Multiplica o resultado por cada número de 1 até n
        for(int i = 1; i <= n; ++i) {
            fatorial *= i;
        }
        cout << "O fatorial de " << n << " eh: " << fatorial << endl;
    }

    return 0;*/


   
    int n;
    unsigned long long t1 = 0, t2 = 1, proximoTermo = 0;

    cout << "Quantos termos da sequencia de Fibonacci voce quer ver? ";
    cin >> n;

    cout << "Sequencia de Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
        // Imprime o termo atual
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        
        // Calcula o próximo termo e atualiza as variáveis
        proximoTermo = t1 + t2;
        t1 = t2;
        t2 = proximoTermo;
        
        cout << proximoTermo << (i == n ? "" : ", ");
    }
    cout << endl;

    return 0;
}
