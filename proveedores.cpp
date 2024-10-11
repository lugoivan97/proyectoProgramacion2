#include <iostream>
#include "Proveedores.h"

using namespace std;

Proveedores::Proveedores(){
    _Idproducto = 0;
    _Cantidad = 0;
    _PrecioTotal = 0;
}
void Proveedores::setIdproducto(int id){
    _Idproducto = id;
}
void Proveedores::setCantidad(int cantidad){
    _Cantidad = cantidad;
}
void Proveedores::setPreciototal(float precioTotal){
    _PrecioTotal = precioTotal;
}
int Proveedores::getIdproducto(){
    return _Idproducto;
}
int Proveedores::getCantidad(){
    return _Cantidad;
}
float Proveedores::getPreciototal(){
    return _PrecioTotal;
}

void Proveedores::cargar(){}

void Proveedores::mostrar(){}

bool Proveedores::escribirDisco(int pos){}

bool Proveedores::leerDisco(int pos){}
