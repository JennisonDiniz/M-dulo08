#include<iostream>
#include<string>

using namespace std;

//Classe base(Pai)
class Pessoa{
    protected:
        string nome;

 public:
    Pessoa(string n) : nome(n) {}

    virtual void falar(){
        cout << nome << " esta falando." << endl;
    }
        
};

//Classe derivada(Filho)
class Professor : public Pessoa{
    private:
    string disciplina;

public:
    Professor(string n, string d) : Pessoa(n), disciplina(d) {}

void falar() override {
    cout <<"Professor "  << nome << " esta ensinando " << disciplina << "." << endl;
}
};

//Classe derivada(Filho)
class Aluno : public Pessoa{
    private:
    int matricula;

public:
    Aluno(string n, int m) : Pessoa(n), matricula(m) {}

    void falar() override {
        cout << "Aluno(a) " << nome << " (Matricula: " << matricula << ")" << endl;
    }

};

   void fazerFalar(Pessoa* p){
    p ->falar();
   }


int main(){
     
    Pessoa* p1 = new Pessoa("Joao");
    Pessoa* p2 = new Aluno("Maria", 12345);
    Pessoa* p3 = new Professor("Pedro", "Fisica");

    fazerFalar(p1);
    fazerFalar(p2);
    fazerFalar(p3);

    delete p1;
    delete p2;
    delete p3;

    return 0;
}