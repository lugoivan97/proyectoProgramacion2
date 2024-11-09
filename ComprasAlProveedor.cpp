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
    if(CantidadProductos > 0){
        _CantidadProductos=CantidadProductos;
    }
}

void ComprasAlProveedor::setPrecioUnitario(float PrecioUnitario){
    if(PrecioUnitario > 0){
        _PrecioUnitario=PrecioUnitario;
    }
}

void ComprasAlProveedor::setPrecioTotal(float PrecioTotal){
    if(PrecioTotal > 0){
        _PrecioTotal=PrecioTotal;
    }
}

void ComprasAlProveedor::setFechaDeCompra(int dia, int mes, int anio){
    _fecha.setDia(dia);
    _fecha.setMes(mes);
    _fecha.setAnio(anio);
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

string ComprasAlProveedor::getFechaDeCompra(){
    return _fecha.toString();
}

void ComprasAlProveedor::cargar(){
    int idproveedor, idproducto, dia, mes, anio;
    char nombreproveedor[50], nombreproducto[50], separador;
    cout<< "FECHA DE COMPRA: ";
    cin>> dia >> separador >> mes >> separador >> anio;
    setFechaDeCompra(dia, mes, anio);
    cout<< "ID DEL PROVEEDOR: ";
    cin>>idproveedor;
    _proveedor.setIdproveedor(idproveedor);
    cout<< "MARCA: ";
    cin>>nombreproveedor;
    _proveedor.setMarca(nombreproveedor);
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
    cout<< "FECHA DE COMPRA AL PROVEEDOR: "<<getFechaDeCompra()<<endl;
    cout<< "ID DEL PROVEEDOR: "<<_proveedor.getIdproveedor()<<endl;
    cout<< "MARCA: "<<_proveedor.getMarca()<<endl;
    cout<< "ID DEL PRODUCTO: "<<_producto.getIDProducto()<<endl;
    cout<< "NOMBRE DEL PRODUCTO: "<<_producto.getNombre()<<endl;
    cout<< "CANTIDAD DE PRODUCTOS COMPRADOS: "<<getCantidadProductos()<<endl;
    cout<< "PRECIO UNITARIO DEL PRODUCTO: "<<getPrecioUnitario()<<endl;
    cout<< "PRECIO TOTAL: "<<getPrecioTotal()<<endl;
}
