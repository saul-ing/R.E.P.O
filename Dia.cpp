#include <iostream>
using namespace std;
int main(){
    int dia = 0;
    cout << "Por favor ingrese un numero para el dia de la semana (1-7)"<<endl;
    cin>> dia;
    if (dia == 1){
        cout << "es un dia laboral"<<endl;
    } else if (dia == 2){
        cout << "es un dia laboral"<<endl;
    }else if (dia == 3){
        cout << "es un dia laboral"<<endl;
    }else if (dia == 4){
        cout << "es un dia laboral"<<endl;
    }else if (dia == 5){
        cout << "es un dia laboral"<<endl;
    }else if (dia == 6){
        cout << "es sabadito, no se trabaja "<<endl;
    }else if (dia == 7){
        cout << "es domingo, no se trabaja, pero mañana es lunes :("<<endl;
    }else {
        cout << "opcion no valida, ingrese un numero del rango de 1-7"<<endl;
    }
    

    return 0;
}