#pragma once
#include "persona.h"

class Vendedor:public Persona{
public:
    Vendedor();
    void setComisiones(float comision);
    void setIngreso(char ingreso);
    float getComisiones();
    char getIngreso();
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
private:
    float _Comisiones;
    char _Ingreso[15];
};
