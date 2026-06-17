#include<iostream>
#include<string>

using namespace std;

//Classe base(Pai)
class Pessoa {
    protected:
        string nome;
   
   public:
   
   Pessoa(string n) : nome(n) {}
};
//Classe derivada(Filho)
class Aluno : public Pessoa {
    private:
        int matricula;
 
 public:
 
    Aluno(string n, int m) : Pessoa(n), matricula(m) {}

  void exibir(){
    cout << "Nome : " << nome << ", Matricula : " << matricula << endl;
  }  

};

int main(){
    Aluno a1("Joao", 12345);
    a1.exibir();
    return 0;
}