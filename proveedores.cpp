#include <iostream>
#include "Proveedores.h"
#include "persona.h"

using namespace std;

Proveedores::Proveedores(int id, int cantidad, float precioTotal, const char* apellidos, const char* nombres, const char* fecha):Persona(apellidos, nombres, fecha){
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

void Proveedores::cargar(){
    Persona::cargar();
    cout<< "INGRESAR EL ID DEL PRODUCTO: ";
    cin>>_Idproducto;
    cout<< "INGRESAR LA CANTIDAD: ";
    cin>>_Cantidad;
    cout<< "INGRESAR EL PRECIO TOTAL: ";
    cin>>_PrecioTotal;
}

void Proveedores::mostrar(){
    Persona::mostrar();
    cout<< "ID DEL PRODUCTO: "<<getIdproducto()<<endl;
    cout<< "CANTIDAD VENDIDA: "<<getCantidad()<<endl;
    cout<< "PRECIO TOTAL: "<<getPreciototal()<<endl;

}

bool Proveedores::escribirDisco(int pos){}

bool Proveedores::leerDisco(int pos){}
