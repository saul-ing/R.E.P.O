#include <iostream>
using namespace std;
int main(){

int numero;
int numeroSecreto = 20;
cout << "adivina el numero entre el 1 y el 100"<<endl;
cout << "ingrese el numero " << endl;
cin >> numero;
while (numero != numeroSecreto){
    if (numero < numeroSecreto){
        cout << "El numero es muy bajo, intente de nuevo" << endl;
    }else if (numero > numeroSecreto){
        cout <<"El numero es muy alto, intente de nuevo" << endl;
    }
    cin >> numero;
     if (numero == numeroSecreto){
        cout << "Felicidades adivinaste el numero"<< endl;
    }
}




    return 0;
}