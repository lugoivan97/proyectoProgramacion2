#pragma once
#include "persona.h"

class Cliente:public Persona{
public:
    Cliente();
    void setDomicilio(char* domicilio);
    void setTelefono(char* telefono);
    void setMail(char* mail);
    const char* getDomicilio();
    const char* getTelefono();
    const char* getMail();
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
private:
    char _Domicilio[100];
    char _Telefono[15];
    char _Mail[100];
};
