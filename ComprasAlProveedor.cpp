#include "ComprasAlProveedor.h"
#include <cstring>
#include <iostream>
using namespace std;

ComprasAlProveedor::ComprasAlProveedor(Producto& producto):_producto(producto){
}

ComprasAlProveedor::ComprasAlProveedor(Producto& producto, int CantidadProductos, float PrecioUnitario, float PrecioTotal): _producto(producto){
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

void ComprasAlProveedor::SumaDeStock(Producto& producto){
    if(producto.getIDProducto()==_producto.getIDProducto()){
        int stockAnterior=producto.getStock();
        int stockActual=stockAnterior+_CantidadProductos;
        _producto.setStock(stockActual);
    }
    else {
        cout<< "ID DE PRODUCTO NO ENCONTRADO"<<endl;
    }
}

void ComprasAlProveedor::cargar(Producto producto){
    int idproveedor, idproducto, dia, mes, anio;
    char nombreproveedor[50], nombreproducto[50], separador;
    cout<< "FECHA DE COMPRA: ";
    cin>> dia >> separador >> mes >> separador >> anio;
    setFechaDeCompra(dia, mes, anio);
    cout<< "ID DEL PROVEEDOR: ";
    while(true){
        cin>>idproveedor;
        if(cin.fail()){
        cout<< "INCORRECTO. INTENTA NUEVAMENTE"<<endl;
        cout<< "INGRESAR EL ID DEL PROVEEDOR: ";
        cin.clear();
        cin.ignore();
    }
    else{
        _proveedor.setIdproveedor(idproveedor);
        break;
    }
    }
    cin.ignore();
    cout<< "MARCA: ";
    cin.getline(nombreproveedor, 50);
    _proveedor.setMarca(nombreproveedor);
    cout<<"ID DEL PRODUCTO: ";
    cin>>idproducto;
    _producto.setIDProducto(idproducto);
    cin.ignore();
    cout<< "NOMBRE DEL PRODUCTO: ";
    cin.getline(nombreproducto, 50);
    _producto.setNombre(nombreproducto);
    cout<< "CANTIDAD DE PRODUCTOS COMPRADOS: ";
    cin>>_CantidadProductos;
    cout<< "PRECIO UNITARIO DEL PRODUCTO: $ ";
    cin>>_PrecioUnitario;
    SumaDeStock(producto);
}

void ComprasAlProveedor::mostrar(){
    cout<< "FECHA DE COMPRA AL PROVEEDOR: "<<getFechaDeCompra()<<endl;
    cout<< "ID DEL PROVEEDOR: "<<_proveedor.getIdproveedor()<<endl;
    cout<< "MARCA: "<<_proveedor.getMarca()<<endl;
    cout<< "ID DEL PRODUCTO: "<<_producto.getIDProducto()<<endl;
    cout<< "NOMBRE DEL PRODUCTO: "<<_producto.getNombre()<<endl;
    cout<< "CANTIDAD DE PRODUCTOS COMPRADOS: "<<getCantidadProductos()<<endl;
    cout<< "PRECIO UNITARIO DEL PRODUCTO: $"<<getPrecioUnitario()<<endl;
    cout<< "PRECIO TOTAL: $"<<getPrecioTotal()<<endl;
}
