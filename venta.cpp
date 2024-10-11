#include "venta.h"
#include <cstring>
#include <iostream>

using namespace std;

Venta::Venta(){
    _ID=0;
    std::string _fecha= "10/10/2024";
    _idCliente=0;
    _idVendedor=0;
    std::string _formaDePago= "fp";
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

const char* Venta::getFecha(){
    return _fecha;
}

int Venta::getIDCliente(){
    return _idCliente;
}

int Venta::getIDVendedor(){
    return _idVendedor;
}

const char* Venta::getFormaDePago(){
    return _formaDePago;
}

bool Venta::getEnvio(){
    return _envio;
}

void Venta::cargar(){
    cout<< "INGRESAR EL ID: ";
    cin>>_ID;
    cout<< "INGRESAR LA FECHA: ";
    cin>>_fecha;
    cout<< "INGRESAR EL ID DEL CLIENTE: ";
    cin>>_idCliente;
    cout<< "INGRESAR EL ID DEL VENDEDOR: ";
    cin>>_idVendedor;
    cout<< "INGRESAR FORMA DE PAGO: ";
    cin>>_formaDePago;
    cout<< "INGRESAR SI TIENE ENVIO O NO: ";
    cin>>_envio;
}

void Venta::mostrar(){
    cout<< "EL ID ES: "<<_ID<<endl;
    cout<< "LA FECHA ES: "<<_fecha<<endl;
    cout<< "EL ID DEL CLIENTE ES: "<<_idCliente<<endl;
    cout<< "EL ID DEL VENDEDOR ES. "<<_idVendedor<<endl;
    cout<< "LA FORMA DE PAGO ES: "<<_formaDePago<<endl;
    cout<< "TIENE ENVIO O NO: "<<_envio<<endl;
}

bool Venta::escribirDisco(int pos){
}

bool Venta::leerDisco(int pos){
}
