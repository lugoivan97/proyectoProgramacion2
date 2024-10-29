#include "detalleVenta.h"
#include <iostream>
using namespace std;


detalleVenta::detalleVenta(){
    _IDVenta=0;
    _IDProducto=0;
    _cantidad=0;
    _precioUnitario=0.0f;
    _puntosGanados=0;
}

detalleVenta::detalleVenta(int idVenta, int idProducto, int cantidad, float precioUnitario, int puntosGanados){
    _IDVenta=idVenta;
    _IDProducto=idProducto;
    _cantidad=cantidad;
    _precioUnitario=precioUnitario;
    _puntosGanados=puntosGanados;
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

void detalleVenta::setPrecio(float precioUnitario){
    _precioUnitario=precioUnitario;
}

void detalleVenta::setPuntosGanados(int puntosGanados){
    _puntosGanados=puntosGanados;
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

float detalleVenta::getPrecio(){
    return _precioUnitario;
}

void detalleVenta::CalcularTotal(){
    float precioTotal = _cantidad*_precioUnitario;
}

void detalleVenta::ContarPuntos(int idVenta){
    int cantidadProductos=0;
    if(getIDVenta()==idVenta){
        cantidadProductos+=_cantidad;
    }
     for (int i=0; i<cantidadProductos; i++){
        _puntosGanados+=5;
    }
}

int detalleVenta::getPuntosGanados(){
    cout<< "LA CANTIDAD DE PUNTOS ES: "<<_puntosGanados<<endl;
}

void detalleVenta::cargar(){
    cout<< "--------------"<< "DETALLE DE VENTA"<< "--------------"<<endl;
    cout<< "ID de VENTA: ";
    cin>>_IDVenta;
    cout<< "ID de PRODUCTO: ";
    cin>>_IDProducto;
    cout<< "CANTIDAD: ";
    cin>>_cantidad;
    cout<< "PRECIO: $ ";
    cin>>_precioUnitario;
}

void detalleVenta::mostrar(){
    cout<< "--------------"<< "DETALLE DE VENTA"<< "--------------"<<endl;
    cout<< "ID DE VENTA: "<<getIDVenta()<<endl;
    cout<< "ID DE PRODUCTO: "<<getIDProducto()<<endl;
    cout<< "CANTIDAD: "<<getCantidad()<<endl;
    cout<< "PRECIO: "<<getPrecio()<<endl;
}

bool detalleVenta::escribirDisco(int pos){
}

bool detalleVenta::leerDisco(int pos){
}
