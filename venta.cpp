#include "venta.h"
#include <cstring>
#include <iostream>

using namespace std;

Venta::Venta(){
    _IDVenta=0;
    Cliente _cliente;
    _idVendedor=0;
    strcpy(_formaDePago, "fp");
    Fecha _fecha;
}

Venta::Venta(int idVenta, Cliente cliente, int idVendedor, char* fp, Fecha fecha){
    _IDVenta=idVenta;
    _cliente=cliente;
    _idVendedor=idVendedor;
    strcpy(_formaDePago, fp);
    _fecha=fecha;
}

void Venta::setIDVenta(int id){
    _IDVenta=id;
}

void Venta::setCliente(){
    _cliente.cargar();
}

void Venta::setIDVendedor(int idVendedor){
    _idVendedor=idVendedor;
}

void Venta::setFormaDePago(int fp){
    switch(fp){
    case 1:
            strcpy(_formaDePago,"Efectivo");
        break;
    case 2:
        strcpy(_formaDePago,"Debito");
        break;
    case 3:
        strcpy(_formaDePago,"Credito");
        break;
    case 4:
        strcpy(_formaDePago,"Billetera Virtual");
        break;
    }
}

void Venta::setFecha(int dia, int mes, int anio){
    _fecha.setDia(dia);
    _fecha.setMes(mes);
    _fecha.setAnio(anio);
}

int Venta::getIDVenta(){
    return _IDVenta;
}

int Venta::getCliente(){
   return _cliente.getId();
}

int Venta::getIDVendedor(){
    return _idVendedor;
}

const char* Venta::getFormaDePago(){
    return _formaDePago;
}


std::string Venta::getFecha(){
    return _fecha.toString();
}

void Venta::cargar(){
    int dia, mes, anio, fp;
    char separador;
    cout<< "INGRESAR EL ID VENTA: ";
    cin>>_IDVenta;
    cout<< "INGRESAR LA FECHA DE LA VENTA: ";
    cin>> dia >> separador >> mes >> separador >> anio;
    setFecha(dia, mes, anio);
    cout<< "INGRESE LA FORMA DE PAGO (1-Efectivo, 2-Debito, 3-Credito, 4-Billetera Virtual): ";
    cin>>fp;
    setFormaDePago(fp);
    cout << "--------------------------------" << endl;
    cout<< "INGRESE LOS DATOS DEL CLIENTE: ";
    _cliente.cargar();
    cout<< "INGRESE EL ID DEL VENDEDOR: ";
    cin>>_idVendedor;
}


void Venta::mostrar(){
    cout<< "FECHA DE LA VENTA: "<<getFecha()<<endl;
    cout<< "ID DE VENTA: "<< getIDVenta() <<endl;
    cout<< "ID DEL CLIENTE: "<< getCliente()<<endl;
    cout<< "ID DEL VENDEDOR: "<<_idVendedor<<endl;
    cout<< "FORMA DE PAGO: "<<getFormaDePago()<<endl;
}

bool Venta::escribirDisco(int pos){
}

bool Venta::leerDisco(int pos){
}
