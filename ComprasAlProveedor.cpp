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
    int idproveedor, idproducto;
    char nombreproveedor[50], nombreproducto[50];
    cout<< "ID DEL PROVEEDOR: ";
    cin>>idproveedor;
    _proovedor.setId(idproveedor);
    cout<< "MARCA: ";
    cin>>nombreproveedor;
    _proovedor.setMarca(nombreproveedor);
    cout<<"ID DEL PRODUCTO: ";
    cin>>idproducto;
    _producto.setIDProducto(idproducto);
    cout<< "NOMBRE DEL PRODUCTO: ";
    cin>>nombreproducto;
    _producto.setNombre(nombreproducto);
    cout<< "CANTIDAD DE PRODUCTOS COMPRADOS: ";
    cin>>_CantidadProductos;
    cout<< "PRECIO UNITARIO DEL PRODUCTO: ";
    cin>>_PrecioUnitario;
}

void ComprasAlProveedor::mostrar(){
    cout<< "ID DEL PROVEEDOR: "<<_proovedor.getIdproveedor()<<endl;
    cout<< "MARCA: "<<_proovedor.getMarca()<<endl;
    cout<< "ID DEL PRODUCTO: "<<_producto.getIDProducto()<<endl;
    cout<< "NOMBRE DEL PRODUCTO: "<<_producto.getNombre()<<endl;
    cout<< "CANTIDAD DE PRODUCTOS COMPRADOS: "<<getCantidadProductos()<<endl;
    cout<< "PRECIO UNITARIO DEL PRODUCTO: "<<getPrecioUnitario()<<endl;
    cout<< "PRECIO TOTAL: "<<getPrecioTotal()<<endl;
}
