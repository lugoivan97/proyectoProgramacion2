#include "persona.h"
#include <cstring>
#include <iostream>
using namespace std;

Persona::Persona(){
    _Id = 0;
    std::string _Apellidos = "apellidos";
    std::string _Nombres = "nombres";
    std::string _Nacimiento= "01/01/2024";
    _Estado = true;
}

void Persona::setId(int id){
    _Id = id;
}

void Persona::setApellidos(char* apellidos){
    strcpy(_Apellidos, apellidos);
}

void Persona::setNombres(char* nombres){
    strcpy(_Nombres, nombres);
}

void Persona::setNacimiento(char* fecha){
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

void Persona::cargar(){}

void Persona::mostrar(){}

bool Persona::escribirDisco(int pos){}

bool Persona::leerDisco(int pos){}
