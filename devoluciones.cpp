#include "devoluciones.h"
#include <cstring>

using namespace std;

Devoluciones::Devoluciones(){
    _IDProducto=0;
    _ingresoDevolucion[15]="fecha";
    _IDCliente=0;
    _posDevolucion=0;
}

void Devoluciones::setIDProducto(int id){
    _IDProducto=id;
}

void Devoluciones::setIngresoDevolucion(char* fecha){
    strcpy(_ingresoDevolucion, fecha);
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

char Devoluciones::getIngresoDevolucion(){
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
