#include <iostream>
using namespace std;
int main() {
int numero;
cout << "ingrese un numero para sabes si es par o impar "<<endl;
cin >> numero;
if(numero % 2 == 0) {
    cout << "el numero es par "<<endl;
}else if (numero %2 !=0){
    cout <<"el numnero es imapar"<<endl;
}else {
    cout << "el numero no es par ni impar "<<endl;
}


    return 0;

}
