#include <iostream>
#include <string>

using namespace std;

//Classe base(Pai)
class Animal {

    protected:
        string nome;

public:
 Animal(string n) : nome(n) {}

 void falar(){
    cout << "Animal faz um som." << endl;
 }
};

//Classe derivada(Filho)
class Cachorro : public Animal {
    public:
    Cachorro(string n): Animal(n) {}
};

int main(){
    Cachorro rex("Rex");
    rex.falar();
    return 0;
}