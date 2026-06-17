#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {
private:
    string titular;
    double saldo;

public:
    ContaBancaria(string t, double s) : titular(t), saldo(s) {}

    string getTitular() const { return titular; }
    double getSaldo() const { return saldo; }

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "Deposito de $" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Valor de deposito invalido." << endl;
        }
    }

    bool sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            cout << "Saque de $" << valor << " realizado com sucesso." << endl;
            return true;
        } else {
            cout << "Valor de saque invalido ou saldo insuficiente." << endl;
            return false;
        }
    }
}; // <--- A classe termina aqui com o ponto e vírgula!

// Toda a lógica de testes deve ficar dentro da função main
int main() {
    // Criando o objeto da classe
    ContaBancaria conta("Joao Silva", 1000.0);
    
    // Mostrando os dados iniciais
    cout << "Titular: " << conta.getTitular() << endl;
    cout << "Saldo inicial: $" << conta.getSaldo() << endl;

    // Realizando as operações
    conta.depositar(500.0);
    conta.sacar(200.0);
    conta.sacar(2000.0); // Tentativa de saque maior que o saldo

    // Mostrando o saldo final
    cout << "Saldo final: $" << conta.getSaldo() << endl;

    return 0;
}