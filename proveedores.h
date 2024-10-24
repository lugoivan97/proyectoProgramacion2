#pragma once
#include "persona.h"
#include "categoria.h"

class Proveedores:public Persona{
public:
    Proveedores();
    Proveedores(int Idproveedor);
    Categoria categoria();
    void setIdproveedor(int id);
    void setNombre(char* nombre);
    int getIdproveedor();
    const char* getNombre();
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
private:
    int _Idproveedor;
    char _Nombre;
};
