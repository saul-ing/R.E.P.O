#include <iostream>
using namespace std;
int main (){
int monto;
cout << "ingrese el monto a pagar"<< endl;
cin >> monto;
if (monto >= 100) {
    cout << "el monto a pagar es:"<< monto - (monto * 0.10) << endl;


}else if (monto < 100)
{
    cout << "no cumple con el monto minimo para el descuento"<< endl;
    
}




return 0;

}