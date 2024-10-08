#include "venta.h"
#include <cstring>
using namespace std;

Venta::Venta(){
    _ID=0;
    _fecha[15]="fecha";
    _idCliente=0;
    _idVendedor=0;
    _formaDePago[50]="fp";
    _envio=0;
}

void Venta::setID(int id){
    _ID=id;
}

void Venta::setFecha(char* fecha){
    strcpy(_fecha, fecha);
}

void Venta::setIDCliente(int idCliente){
    _idCliente=idCliente;
}

void Venta::setIDVendedor(int idVendedor){
    _idVendedor=idVendedor;
}

void Venta::setFormaDePago(char* fp){
    strcpy(_formaDePago,fp);
}

void Venta::setEnvio(bool envio){
    _envio=envio;
}

int Venta::getID(){
    return _ID;
}

char Venta::getFecha(){
    return _fecha;
}

int Venta::getIDCliente(){
    return _idCliente;
}

int Venta::getIDVendedor(){
    return _idVendedor;
}

char Venta::getFormaDePago(){
    return _formaDePago;
}

bool Venta::getEnvio(){
    return _envio;
}

void Venta::cargar(){
}

void Venta::mostrar(){
}

bool Venta::escribirDisco(int pos){
}

bool Venta::leerDisco(int pos){
}
