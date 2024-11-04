#pragma once
#include "persona.h"
#include "categoria.h"

class Proveedores:public Persona{
public:
    Proveedores();
    Proveedores(int Idproveedor);
    Categoria categoria();
    void setIdproveedor(int id);
    void setMarca(const char* marca);
    int getIdproveedor();
    const char* getMarca();
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
private:
    int _Idproveedor;
    char _Marca[50];
};
