#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   /* int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Sua idade é: " << idade << endl;
    return 0;*/

    double preco = 19.99;
    cout << "Preço: R$" << preco << endl;
    cout << fixed << setprecision(2);

    double pi = 3.14159265;
    cout << setprecision(pi) << endl;
    cout <<fixed << setprecision(3) << pi << endl;
}
