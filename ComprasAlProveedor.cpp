#include "ComprasAlProveedor.h"
#include <cstring>
#include <iostream>
using namespace std;

ComprasAlProveedor::ComprasAlProveedor(){}

ComprasAlProveedor::ComprasAlProveedor(int CantidadProductos, float PrecioUnitario, float PrecioTotal){
    _CantidadProductos=CantidadProductos;
    _PrecioUnitario=PrecioUnitario;
    _PrecioTotal=PrecioTotal;
}

void ComprasAlProveedor::setCantidadProductos(int CantidadProductos){
    _CantidadProductos=CantidadProductos;
}

void ComprasAlProveedor::setPrecioUnitario(float PrecioUnitario){
    _PrecioUnitario=PrecioUnitario;
}

void ComprasAlProveedor::setPrecioTotal(float PrecioTotal){
    _PrecioTotal=PrecioTotal;
}

int ComprasAlProveedor::getCantidadProductos(){
    return _CantidadProductos;
}

float ComprasAlProveedor::getPrecioUnitario(){
    return _PrecioUnitario;
}

float ComprasAlProveedor::getPrecioTotal(){
    return _CantidadProductos*_PrecioUnitario;
}

void ComprasAlProveedor::cargar(){
    cout<< "CANTIDAD DE PRODUCTOS COMPRADOS: ";
    cin>>_CantidadProductos;
    cout<< "PRECIO UNITARIO DEL PRODUCTO: ";
    cin>>_PrecioUnitario;
}

void ComprasAlProveedor::mostrar(){
    cout<< "CANTIDAD DE PRODUCTOS COMPRADOS: "<<getCantidadProductos()<<endl;
    cout<< "PRECIO UNITARIO DEL PRODUCTO: "<<getPrecioUnitario()<<endl;
    cout<< "PRECIO TOTAL: "<<getPrecioTotal()<<endl;
}
