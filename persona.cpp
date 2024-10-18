#include "persona.h"
#include <cstring>
#include <iostream>
using namespace std;

Persona::Persona(const char* apellidos="apellidos", const char* nombres="nombres", const char* fecha="01/01/2024"){
    strcpy(_Apellidos, apellidos);
    strcpy(_Nombres, nombres);
    strcpy(_Nacimiento, fecha);
}

void Persona::setId(int id){
    _Id = id;
}

void Persona::setApellidos(const char* apellidos){
    strcpy(_Apellidos, apellidos);
}

void Persona::setNombres(const char* nombres){
    strcpy(_Nombres, nombres);
}

void Persona::setNacimiento(const char* fecha){
    strcpy(_Nacimiento, fecha);
}

void Persona::setEstado(bool estado){
    _Estado = estado;
}

int Persona::getId(){
    return _Id;
}

const char* Persona::getApellidos(){
    return _Apellidos;
}

const char* Persona::getNombres(){
    return _Nombres;
}

const char* Persona::getNacimiento(){
    return _Nacimiento;
}

bool Persona::getEstado(){
    return _Estado;
}

void Persona::cargar(){
    cout<< "EL NOMBRE ES: ";
    cin>>_Nombres;
    cout<< "EL APELLIDO ES: ";
    cin>>_Apellidos;
    cout<< "EL NACIMIENTO ES: ";
    cin>>_Nacimiento;
}

void Persona::mostrar(){
    cout<< "EL NOMBRE ES: "<<getNombres()<<endl;
    cout<< "EL APELLIDO ES: "<<getApellidos()<<endl;
    cout<< "EL NACIMIENTO ES: "<<getNacimiento()<<endl;
}

bool Persona::escribirDisco(int pos){}

bool Persona::leerDisco(int pos){}
