#include <iostream>
#include <cstring>
#include "Cliente.h"
#include "persona.h"
using namespace std;

Cliente::Cliente(int idCliente, int puntos):Persona(_Id, _Apellidos, _Nombres, _Nacimiento, _Telefono, _Mail, _Domicilio){
    _IDCliente=idCliente;
    _Puntos=puntos;
}

Cliente::Cliente():Persona(1, "Apellido", "Nombre", "01/01/2024", "123456789", "sistema@gestion.com.ar", "Florida 1234"), _IDCliente(0), _Puntos(0){
}

void Cliente::setIdCliente(int idCliente){
    _IDCliente=idCliente;
}

void Cliente::setPuntos(int Puntos){
    _Puntos=Puntos;
}

int Cliente::getidCliente(){
    return _IDCliente;
}

int Cliente::getPuntos(){
    return _Puntos;
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
