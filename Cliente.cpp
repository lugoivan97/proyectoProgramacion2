#include <iostream>
#include <cstring>
#include "Cliente.h"
#include "persona.h"
using namespace std;

Cliente::Cliente(const char* domicilio)
    :Persona(_Apellidos, _Nombres, _Nacimiento, _Telefono, _Mail) {
    strcpy(_Domicilio, domicilio);
}

Cliente::Cliente():Persona("Apellido", "Nombre", "01/01/2024", "123456789", "sistema@gestion.com.ar") {
    strcpy(_Domicilio, "Florida");
}

void Cliente::setDomicilio(const char* domicilio){
    strcpy(_Domicilio, domicilio);
}

const char* Cliente::getDomicilio(){
    return _Domicilio;
}



void Cliente::cargar(){
    cout<< "------------ "<<"DATOS DEL CLIENTE"<< " --------------"<<endl;
    Persona::cargar();
    cout<< "DOMICILIO: ";
    cin>>_Domicilio;
}

void Cliente::mostrar(){
    cout<< "------------ "<<"DATOS DEL CLIENTE"<< " --------------"<<endl;
    Persona::mostrar();
    cout<<"DOMICILIO: "<<getDomicilio()<<endl;
}

bool Cliente::escribirDisco(int pos){}

bool Cliente::leerDisco(int pos){}
