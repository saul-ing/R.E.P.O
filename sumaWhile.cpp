#include <iostream>
using namespace std;
int main (){
int numero;
int suma = 0;

cout << "Ingrese un numero para realizar las sumas, si es 0 la suma se detendra" << endl;
cin >> numero;

while (numero != 0){
    suma = suma + numero;
    cout << "ingrese mas numero para seguir sumando, 0 para detener la suma" <<endl;
    cin >> numero;
    

}
cout << "la sume es:"<< suma << endl; 

    return 0;
}
