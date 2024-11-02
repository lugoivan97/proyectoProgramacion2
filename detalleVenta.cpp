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

detalleVenta::detalleVenta(int idVenta, int idProducto, int cantidad, float precioUnitario, Cliente cliente){
    _IDVenta=idVenta;
    _IDProducto=idProducto;
    _cantidad=cantidad;
    _precioUnitario=precioUnitario;
    ContarPuntos(cliente, idVenta);
    _puntosGanados = 0;
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

void detalleVenta::setPuntosGanados(int puntosGanados){
    _puntosGanados=puntosGanados;
}

void detalleVenta::setPrecioUnitario(float precioUnitario){
    _precioUnitario=precioUnitario;
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

float detalleVenta::CalcularTotal(){
    return _cantidad*_precioUnitario;
}

void detalleVenta::ContarPuntos(Cliente& cliente, int idVenta){
    if(getIDVenta()==idVenta){
        _puntosGanados=_cantidad*5;
        cliente.setPuntaje(cliente.getPuntaje() + _puntosGanados);
}
}

int detalleVenta::getPuntosGanados(){
    return _puntosGanados;
}

void detalleVenta::actualizarPuntaje(Cliente& cliente) {
        _puntosGanados = _cantidad * 5;
        cliente.agregarPuntos(_puntosGanados);
        if(cliente.getPuntaje()>100){
            cliente.PuntajeMeta();
        }
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
    cout<< "PRECIO: "<<getPrecioUnitario()<<endl;
}

bool detalleVenta::escribirDisco(int pos){
}

bool detalleVenta::leerDisco(int pos){
}
