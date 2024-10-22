#pragma once
#include "persona.h"

class Cliente:public Persona{
public:
    Cliente();
    Cliente (const char* domicilio);
    void setDomicilio(const char* domicilio);
    const char* getDomicilio();
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
private:
    char _Domicilio[100];
};
