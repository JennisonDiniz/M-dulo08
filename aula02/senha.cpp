#include <iostream>
#include <string>
#include <limits> // Necessário para limpar o buffer do cin

using namespace std;

int main() {
    // Variáveis para o cadastro do usuário
    string usuarioCadastrado;
    int senhaCadastrada;

    // --- FASE DE CADASTRO ---s
    cout << "--- TELA DE CADASTRO ---" << endl;
    cout << "Defina seu nome de usuario: ";
    cin >> usuarioCadastrado;
    
    // Tratamento de exceção simples no cadastro para garantir que a senha seja número
    while (true) {
        try {
            cout << "Defina sua senha (apenas numeros): ";
            if (!(cin >> senhaCadastrada)) {
                throw runtime_error("Erro: A senha deve conter apenas numeros!");
            }
            break; // Se digitou um número válido, sai do loop de cadastro
        } 
        catch (const runtime_error& e) {
            cout << e.what() << "\n" << endl;
            cin.clear(); // Limpa o estado de erro do cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta a entrada inválida
        }
    }

    cout << "\nCadastro realizado com sucesso!\n" << endl;

    // --- FASE DE LOGIN ---
    string usuarioLogin;
    int senhaLogin;
    int tentativas = 0;
    const int MAX_TENTATIVAS = 3;
    bool loginSucesso = false;

    do {
        try {
            cout << "--- TELA DE LOGIN (Tentativa " << (tentativas + 1) << " de " << MAX_TENTATIVAS << ") ---" << endl;
            cout << "Digite o usuario: ";
            cin >> usuarioLogin;

            cout << "Digite a senha: ";
            
            // Se o usuário digitar algo que não seja um número inteiro
            if (!(cin >> senhaLogin)) {
                throw invalid_argument("A senha precisa ser um numero inteiro!");
            }

            // Verifica se as credenciais correspondem ao cadastro
            if (usuarioLogin == usuarioCadastrado && senhaLogin == senhaCadastrada) {
                loginSucesso = true;
                break; // Sai do laço imediatamente
            } else {
                tentativas++;
                cout << "\nUsuario ou senha incorretos!" << endl;
                if (tentativas < MAX_TENTATIVAS) {
                    cout << "Tente novamente.\n" << endl;
                }
            }
        }
        // Captura o erro de tipo de dado inválido na senha
        catch (const invalid_argument& e) {
            tentativas++;
            cout << "\nErro de Entrada: " << e.what() << endl;
            if (tentativas < MAX_TENTATIVAS) {
                cout << "Você gastou uma tentativa. Tente novamente.\n" << endl;
            }
            
            // Limpa o buffer para o 'cin' voltar a funcionar na próxima rodada
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } while (tentativas < MAX_TENTATIVAS);

    // --- RESULTADO FINAL ---
    if (loginSucesso) {
        cout << "\nLogin efetuado com sucesso! Bem-vindo, " << usuarioCadastrado << "." << endl;
    } else {
        cout << "\nNumero maximo de tentativas excedido! Conta bloqueada." << endl;
    }

    return 0;
}