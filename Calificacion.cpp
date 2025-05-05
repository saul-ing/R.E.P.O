#include <iostream>
using namespace std;
int main() {
int calificacion;
cout << "ingrese su calificacion" <<endl;
cin >> calificacion;

if (calificacion >=6){

    cout << "usted aprobo el examen"<< endl;
}else if (calificacion <6 ){

    cout << "usted reprobo el examen"<< endl;

}

return 0;


}