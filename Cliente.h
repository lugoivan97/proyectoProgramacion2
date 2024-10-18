#pragma once
#include "persona.h"

class Cliente:public Persona{
public:
    Cliente();
    Cliente (const char* domicilio = "Florida",
            const char* telefono = "123456789",
            const char* mail = "sistema@gestion.com",
            const char* apellidos = "apellidos",
            const char* nombres = "nombres",
            const char* fecha = "01/01/2024");
    void setDomicilio(const char* domicilio);
    void setTelefono(const char* telefono);
    void setMail(const char* mail);
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
