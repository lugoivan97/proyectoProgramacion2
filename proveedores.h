#pragma once
#include "persona.h"
#include "categoria.h"

class Proveedores:public Persona{
public:
    Proveedores();
    Proveedores(int id, int cantidad, float precioTotal, const char* apellidos, const char* nombres, const char* fecha);
    Categoria categoria();
    void setIdproveedor(int id);
    int getIdproveedor();
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
private:
    int _Idproveedor;
};
