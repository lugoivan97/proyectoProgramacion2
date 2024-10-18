#include "devoluciones.h"
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

Devoluciones::Devoluciones(int id, const char* ingresoDevolucion, int idCliente, bool posDevolucion){
    _IDProducto=0;
    strcpy(_ingresoDevolucion, ingresoDevolucion);
    _IDCliente=0;
    _posDevolucion=0;
}

void Devoluciones::setIDProducto(int id){
    _IDProducto=id;
}

void Devoluciones::setIngresoDevolucion(const char* ingresoDevolucion){
    strcpy(_ingresoDevolucion, ingresoDevolucion);
}

void Devoluciones::setIDCliente(int idCliente){
    _IDCliente=idCliente;
}

void Devoluciones::setPosibilidadDevolucion(bool posDevolucion){
    _posDevolucion=posDevolucion;
}

int Devoluciones::getIDProducto(){
    return _IDProducto;
}

const char* Devoluciones::getIngresoDevolucion(){
    return _ingresoDevolucion;
}

int Devoluciones::getIDCliente(){
    return _IDCliente;
}

bool Devoluciones::getPosibilidadDevolucion(){
    return _posDevolucion;
}

void Devoluciones::cargar(){
}

void Devoluciones::mostrar(){
}

bool Devoluciones::leerDisco(int pos){
}

bool Devoluciones::escribirDisco(int pos){
}
