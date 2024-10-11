#include <iostream>
#include <cstring>
#include "Cliente.h"
using namespace std;

Cliente::Cliente(){
    std::string _Domicilio="Florida";
    std::string _Telefono="123456789";
    std::string _Mail="sistema@gestion.com";
}

void Cliente::setDomicilio(char* domicilio){
    strcpy(_Domicilio, domicilio);
}

void Cliente::setTelefono(char* telefono){
    strcpy(_Telefono, telefono);
}

void Cliente::setMail(char* mail){
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



void Cliente::cargar(){}

void Cliente::mostrar(){}

bool Cliente::escribirDisco(int pos){}

bool Cliente::leerDisco(int pos){}
