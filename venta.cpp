#include "venta.h"
#include <cstring>
#include <iostream>

using namespace std;

Venta::Venta(){
    _IDVenta=0;
    _idCliente=0;
    _idVendedor=0;
    strcpy(_formaDePago, "fp"),
    _envio=0;
}

void Venta::setIDVenta(int id){
    _IDVenta=id;
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


int Venta::getIDVenta(){
    return _IDVenta;
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
    cin>>_IDVenta;
    cout<< "INGRESAR LA FECHA: ";
    Fecha();
    cout<< "INGRESE LA FORMA DE PAGO: ";
    cin>>_formaDePago;
    cout<< "INGRESE SI TIENE ENVIO O NO: ";
    cin>>_envio;
    cout << "--------------------------------" << endl;
    cout<< "INGRESE EL ID DEL CLIENTE: ";
    cin>>_idCliente;
    cout<< "INGRESE EL ID DEL VENDEDOR: ";
    cin>>_idVendedor;
}

void Venta::mostrar(){
    cout<< "FECHA: "<<fecha.getAnio()<<fecha.getMes()<<fecha.getDia()<<endl;
    cout<< "ID DE VENTA: "<< getIDVenta() <<endl;
    cout<< "ID DEL CLIENTE: "<<_idCliente<<endl;
    cout<< "ID DEL VENDEDOR: "<<_idVendedor<<endl;
    cout<< "FORMA DE PAGO: "<<_formaDePago<<endl;
    cout<< "TIENE ENVIO O NO: "<<_envio<<endl;
}

bool Venta::escribirDisco(int pos){
}

bool Venta::leerDisco(int pos){
}


