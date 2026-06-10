#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //tabuada do 5
 /*for (int i = 1; i <= 10; i++){
    cout << "5 X " << i << " = " << 5*i << endl;
 }
 
    return 0;*/
 
  // contador de 1 a 5
 int contador = 1;
 while (contador <= 5){
    cout << "numero " << contador << " = " << 5*contador << endl;
    contador++;
 }
 
 // senha de acesso
 int senha;
  
 do{
    cout << "Digite a senha: ";
    cin >> senha;
 } while (senha != 1234);

 
}