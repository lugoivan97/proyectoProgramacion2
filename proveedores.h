#pragma once
#include "persona.h"

class Proveedores:public Persona{
public:
    Proveedores();
    void setIdproducto(int id);
    void setCantidad(int cantidad);
    void setPreciototal(float precioTotal);
    int getIdproducto();
    int getCantidad();
    float getPreciototal();
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
private:
    int _Idproducto;
    int _Cantidad;
    float _PrecioTotal;
};
