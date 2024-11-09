#pragma once
#include "persona.h"
#include "FECHA.h"

class Vendedor:public Persona{
public:
    Vendedor();
    Vendedor(float comision, float comisionPagada, Fecha fechaIngreso);
    void setComisiones(float comision);
    void setComisionPagada(float comisionPagada);
    void setFechaIngreso(int dia, int mes, int anio);
    float getComisiones();
    std::string getFechaIngreso();
    float getComisionPagada();
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
private:
    float _Comisiones;
    float _ComisionPagada;
    Fecha _fechaIngreso;
};
