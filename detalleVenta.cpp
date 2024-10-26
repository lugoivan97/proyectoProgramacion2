#include "detalleVenta.h"
#include "Cliente.h"
#include <iostream>
using namespace std;


detalleVenta::detalleVenta(){
    _IDVenta=0;
    _IDProducto=0;
    _cantidad=0;
    _precioUnitario=0.0f;
}

void detalleVenta::setIDVenta(int idVenta){
    _IDVenta=idVenta;
}

void detalleVenta::setIDProducto(int idProducto){
    _IDProducto=idProducto;
}

void detalleVenta::setCantidad(int cantidad){
    _cantidad=cantidad;
}

void detalleVenta::setPrecioUnitario(float precio){
    _precioUnitario=precio;
}

int detalleVenta::getIDVenta(){
    return _IDVenta;
}

int detalleVenta::getIDProducto(){
    return _IDProducto;
}

int detalleVenta::getCantidad(){
    return _cantidad;
}

float detalleVenta::getPrecioUnitario(){
    return _precioUnitario;
}

void detalleVenta::CalcularTotal(){
    float precioTotal = _cantidad*_precioUnitario;
}

void detalleVenta::cargar(){
    cout<< "--------------"<< "DETALLE DE VENTA"<< "--------------"<<endl;
    cout<< "ID de VENTA: ";
    cin>>_IDVenta;
    cout<< "ID de PRODUCTO: ";
    cin>>_IDProducto;
    cout<< "CANTIDAD: ";
    cin>>_cantidad;
    cout<< "PRECIO: ";
    cin>>_precioUnitario;
}

void detalleVenta::mostrar(){
    cout<< "--------------"<< "DETALLE DE VENTA"<< "--------------"<<endl;
    cout<< "ID DE VENTA: "<<getIDVenta()<<endl;
    cout<< "ID DE PRODUCTO: "<<getIDProducto()<<endl;
    cout<< "CANTIDAD: "<<getCantidad()<<endl;
    cout<< "PRECIO: "<<getPrecioUnitario()<<endl;
}

bool detalleVenta::escribirDisco(int pos){
}

bool detalleVenta::leerDisco(int pos){
}

/*void detalleVenta::productosXpuntaje(int producto, int puntaje){

}*/
