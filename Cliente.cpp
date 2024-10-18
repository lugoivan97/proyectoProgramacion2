#include <iostream>
#include <cstring>
#include "Cliente.h"
#include "persona.h"
using namespace std;

Cliente::Cliente(const char* domicilio, const char* telefono, const char* mail,
                const char* apellidos, const char* nombres, const char* fecha)
    :Persona(apellidos, nombres, fecha) {
    strcpy(_Domicilio, domicilio);
    strcpy(_Telefono, telefono);
    strcpy(_Mail, mail);
}

void Cliente::setDomicilio(const char* domicilio){
    strcpy(_Domicilio, domicilio);
}

void Cliente::setTelefono(const char* telefono){
    strcpy(_Telefono, telefono);
}

void Cliente::setMail(const char* mail){
    strcpy(_Mail, mail);
}

const char* Cliente::getDomicilio(){
    return _Domicilio;
}

const char* Cliente::getTelefono(){
    return _Telefono;
}

const char* Cliente::getMail(){
    return _Mail;
}



void Cliente::cargar(){
    cout<< "------------ "<<"DATOS DEL CLIENTE"<< " --------------"<<endl;
    Persona::cargar();
    cout<< "DOMICILIO: ";
    cin>>_Domicilio;
    cout<< "TELEFONO: ";
    cin>>_Telefono;
    cout<< "MAIL: ";
    cin>>_Mail;
}

void Cliente::mostrar(){
    cout<< "------------ "<<"DATOS DEL CLIENTE"<< " --------------"<<endl;
    Persona::mostrar();
    cout<<"DOMICILIO: "<<getDomicilio()<<endl;
    cout<< "TELEFONO: "<<getDomicilio()<<endl;
    cout<< "MAIL: "<<getMail()<<endl;
}

bool Cliente::escribirDisco(int pos){}

bool Cliente::leerDisco(int pos){}
