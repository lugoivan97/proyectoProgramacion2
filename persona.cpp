#include "persona.h"
#include <cstring>
#include <iostream>
using namespace std;

Persona::Persona(){
    _Id=0;
    strcpy(_Apellidos, "Apellidos");
    strcpy(_Nombres, "Nombres");
    strcpy (_Telefono, "123456789");
    strcpy(_Mail, "sistema@gestion.com.ar");
    strcpy(_Domicilio, "Vicente Lopez 1234");
}

Persona::Persona(int id, const char* apellidos, const char* nombres, const char* fecha, const char* telefono, const char* mail, const char* domicilio){
    _Id=id;
    strcpy(_Apellidos, apellidos);
    strcpy(_Nombres, nombres);
    strcpy (_Telefono, telefono);
    strcpy(_Mail, mail);
    strcpy(_Domicilio, domicilio);
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
    if(ValidacionTelefono(telefono)){
        strcpy(_Telefono, telefono);
    }
    while (ValidacionTelefono(telefono)==false){
        cout<< "TELEFONO INVALIDO"<<endl;
        cout<< "INGRESAR NUEVAMENTE EL TELEFONO: ";
        cin>>_Telefono;
    }
}

void Persona::setMail(const char* mail){
    strcpy(_Mail, mail);
}

void Persona::setDomicilio(const char* domicilio){
    strcpy(_Domicilio, domicilio);
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

const char* Persona::getDomicilio(){
    return _Domicilio;
}

bool Persona::ValidacionTelefono(const char* telefono){
    int numeros=strlen(telefono);
    if(numeros<8 || numeros>10){
        return false;
    }
    else {
        return true;
    }
}

void Persona::cargar(){
    cout<< "EL NOMBRE ES: ";
    cin>>_Nombres;
    cin.getline(_Nombres, sizeof(_Nombres));
    cout<< "EL APELLIDO ES: ";
    cin>>_Apellidos;
    cout<< "EL NACIMIENTO ES: ";
    cin>>_Nacimiento;
    cout<< "EL TELEFONO ES: ";
    cin>>_Telefono;
    cin.getline(_Telefono, sizeof(_Telefono));
    setTelefono(_Telefono);
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
