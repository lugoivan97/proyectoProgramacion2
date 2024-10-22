#include "persona.h"
#include <cstring>
#include <iostream>
using namespace std;

Persona::Persona(const char* apellidos="apellidos", const char* nombres="nombres", const char* fecha="01/01/2024", const char* telefono="123456789", const char* mail="sistema@gestion.com"){
    strcpy(_Apellidos, apellidos);
    strcpy(_Nombres, nombres);
    strcpy(_Nacimiento, fecha);
    strcpy (_Telefono, telefono);
    strcpy(_Mail, mail);
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

void Persona::setTelefono(const char* telefono){
    strcpy(_Telefono, telefono);
}

void Persona::setMail(const char* mail){
    strcpy(_Mail, mail);
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

const char* Persona::getTelefono(){
    return _Telefono;
}

const char* Persona::getMail(){
    return _Mail;
}

void Persona::cargar(){
    cout<< "EL NOMBRE ES: ";
    cin>>_Nombres;
    cout<< "EL APELLIDO ES: ";
    cin>>_Apellidos;
    cout<< "EL NACIMIENTO ES: ";
    cin>>_Nacimiento;
    cout<< "EL TELEFONO ES: ";
    cin>>_Telefono;
    cout<< "EL MAIL ES: ";
    cin>>_Mail;
}

void Persona::mostrar(){
    cout<< "EL NOMBRE ES: "<<getNombres()<<endl;
    cout<< "EL APELLIDO ES: "<<getApellidos()<<endl;
    cout<< "EL NACIMIENTO ES: "<<getNacimiento()<<endl;
    cout<< "EL TELEFONO ES: "<<getTelefono()<<endl;
    cout<< "EL MAIL ES: "<<getMail()<<endl;
}

bool Persona::escribirDisco(int pos){}

bool Persona::leerDisco(int pos){}
