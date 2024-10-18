#pragma once
#include "persona.h"

class Vendedor:public Persona{
public:
    Vendedor();
    Vendedor(const char* apellidos, const char* nombres, const char* nacimiento,float comision, const char* ingreso);
    void setComisiones(float comision);
    void setIngreso(const char* ingreso);
    float getComisiones();
    const char* getIngreso();
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
private:
    float _Comisiones;
    char _Ingreso[11];
};
