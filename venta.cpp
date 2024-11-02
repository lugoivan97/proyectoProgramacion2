#include "venta.h"
#include "FECHA.h"
#include "persona.h"
#include <cstring>
#include <iostream>

using namespace std;

Venta::Venta(){
    _IDVenta=0;
    _idCliente=0;
    _idVendedor=0;
    strcpy(_formaDePago, "fp");
    _envio=0;
    Fecha fecha;
}

Venta::Venta(int idVenta, int idCliente, int idVendedor, char* fp, bool envio, Fecha fecha){
    _IDVenta=idVenta;
    _idCliente=idCliente;
    _idVendedor=idVendedor;
    strcpy(_formaDePago, fp);
    _envio=envio;
    _fecha=fecha;
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

void Venta::setFecha(int dia, int mes, int anio){
    _fecha.setDia(dia);
    _fecha.setMes(mes);
    _fecha.setAnio(anio);
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

std::string Venta::getFecha(){
    return _fecha.toString();
}

void Venta::cargar(){
    Fecha fecha;
    int dia, mes, anio;

    cout<< "INGRESAR EL ID: ";
    cin>>_IDVenta;
<<<<<<< HEAD
    cout<< "INGRESAR LA FECHA: ";
=======

    cout<< "INGRESAR LA FECHA (dd/mm/aaaa): ";
    char separador; // Variable para guardar el '/'

    cin >> dia >> separador >> mes >> separador >> anio;


    setFecha(dia, mes, anio);

>>>>>>> 83cab5e7c04f267c793303a50b1c04ff43a68df9
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
<<<<<<< HEAD
    cout<< "FECHA: "<<getFecha()<<endl;
=======
    cout<< "FECHA: "<< _fecha.toString() <<endl;
>>>>>>> 83cab5e7c04f267c793303a50b1c04ff43a68df9
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
