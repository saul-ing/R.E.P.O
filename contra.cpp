#include <iostream>
#include <string>
using namespace std;
int main (){
const string usuarioCorrecto = "saul";
const string contrasenaCorrecta = "1234";

string usuarioIngresado;
string contrasenaIngresada;

cout << "Bienvenido al sistema de autentificacion"<<endl;

cout << "Ingrese su usuario:";
cin >> usuarioIngresado;
cout << "ingrese su contraseña:";
cin >> contrasenaIngresada;

if ( usuarioCorrecto == usuarioIngresado && contrasenaCorrecta == contrasenaIngresada){
    cout << "Los datos ingresados son correctos, bienvenido"<<endl;
}else{
    cout << "Los datos ingresados son incorrectos, por favor intente de nuevo (quedan 2 intentos)"<<endl;
}

cout << "Ingrese su usuario:";
cin >> usuarioIngresado;
cout << "ingrese su contraseña:";
cin >> contrasenaIngresada;

if ( usuarioCorrecto == usuarioIngresado && contrasenaCorrecta == contrasenaIngresada){
    cout << "Los datos ingresados son correctos, bienvenido"<<endl;
}else{
    cout << "Los datos ingresados son incorrectos, por favor intente de nuevo (quedan 1 intentos)"<<endl;
}

cout << "Ingrese su usuario:";
cin >> usuarioIngresado;
cout << "ingrese su contraseña:";
cin >> contrasenaIngresada;

if ( usuarioCorrecto == usuarioIngresado && contrasenaCorrecta == contrasenaIngresada){
    cout << "Los datos ingresados son correctos, bienvenido"<<endl;
}else{
    cout << "Los datos ingresados son incorrectos, su acceso ha sido denegado"<<endl;
}

    return 0;
}