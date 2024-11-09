#include <iostream>
#include <cstring>
#include "Proveedores.h"
#include <cstring>
using namespace std;


Proveedores::Proveedores(){
    _Idproveedor = 1;
    strcpy(_Marca, "marca");
    _Estado= true;
    strcpy(_Contacto, "contacto");
    strcpy(_Direccion, "direccion");
}

Proveedores::Proveedores(int id, const char* marca, bool estado, const char* contacto, const char* direccion){
    _Idproveedor=id;
    strcpy(_Marca, marca);
    _Estado=estado;
    strcpy(_Contacto, contacto);
    strcpy(_Direccion, direccion);
}

void Proveedores::setIdproveedor(int id){
    if(id>0){
        _Idproveedor = id;
    }
}

void Proveedores::setMarca(const char* marca){
    strcpy(_Marca, marca);
}

void Proveedores::setEstado(bool estado){
    _Estado=estado;
}

void Proveedores::setContacto(const char* contacto){
    strcpy(_Contacto, contacto);
}

void Proveedores::setDireccionSucursal(const char* direccion){
    strcpy(_Direccion, direccion);
}

int Proveedores::getIdproveedor(){
    return _Idproveedor;
}

const char* Proveedores::getMarca(){
    return _Marca;
}

bool Proveedores::getEstado(){
    return _Estado;
}

const char* Proveedores::getContacto(){
    return _Contacto;
}

const char* Proveedores::getDireccionSucursal(){
  return _Direccion;
}

void Proveedores::cargar(){
    cout<< "INGRESAR EL ID DEL PROVEEDOR: ";
    cin>>_Idproveedor;
    cout<< "INGRESAR LA MARCA: ";
    cin>>_Marca;
    cout<< "INGRESAR EL ESTADO: ";
    cin>>_Estado;
    cout<< "INGRESAR EL MEDIO DE CONTACTO: ";
    cin>>_Contacto;
    cout<< "INGRESAR LA DIRECCION DEL LOCAL/SUCURSAL: ";
    cin>>_Direccion;
}

void Proveedores::mostrar(){
    cout<< "ID DEL PROVEEDOR: "<<getIdproveedor()<<endl;
    cout<< "MARCA: "<<getMarca()<<endl;
    cout<< "ESTADO: "<<getEstado()<<endl;
    cout<< "MEDIO DE CONTACTO: "<<getContacto()<<endl;
    cout<< "DIRECCION DEL LOCAL/SUCURSAL: "<<getDireccionSucursal()<<endl;

}

bool Proveedores::escribirDisco(int pos){}

bool Proveedores::leerDisco(int pos){}
