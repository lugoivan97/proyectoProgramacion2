#include "detalleVenta.h"

using namespace std;


detalleVenta::detalleVenta(){
    _IDVenta=0;
    _IDProducto=0;
    _cantidad=0;
    _precio=0.0f;
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

void detalleVenta::setPrecio(float precio){
    _precio=precio;
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
    return _precio;
}

void detalleVenta::mostrar(){
}

void detalleVenta::cargar(){
}

bool detalleVenta::escribirDisco(int pos){
}

bool detalleVenta::leerDisco(int pos){
}
