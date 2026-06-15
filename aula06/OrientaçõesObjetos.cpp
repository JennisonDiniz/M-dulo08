// Orientações a Objetos
// Aula 06 - 15/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz


#include <iostream>
#include <string>

using namespace std;

class Cachorro{

    private:
        std::string nome;

    public:
        Cachorro(std::string nome){
            this->nome = nome;
        }

        void latir(){
            cout << nome << " esta latindo!" << endl;
        }

    
};

int main(){
    Cachorro cachorro1("Rex");
    cachorro1.latir();

    return 0;
}