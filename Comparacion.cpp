#include <iostream>
using namespace std;
int main (){
int numero1, numero2;

cout << "ingrese un numero para ser comparado" <<endl;
cin>> numero1;
cout << "ingrese otro numero para ser comparado" <<endl;
cin >> numero2;
if (numero1 > numero2){
    cout << "el numero mayor es:" <<numero1 <<endl;

}else if (numero1 < numero2){
    cout <<"el numero mayor es:"<<numero2<<endl;

}else if (numero1 == numero2){
    cout << "los numero son iguales"<<endl;

}

return 0;
}