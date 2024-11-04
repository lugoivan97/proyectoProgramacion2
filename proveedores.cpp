#include <iostream>
#include <cstring>
#include "Proveedores.h"
#include "persona.h"

using namespace std;


Proveedores::Proveedores(int id):Persona(_Id, _Apellidos, _Nombres, _Nacimiento, _Telefono, _Mail, _Domicilio){
   _Idproveedor = id;
}

Proveedores::Proveedores():Persona(1, "Apellido", "Nombre", _Nacimiento, "123456789", "sistema@gestion.com", "Florida 1234"), _Idproveedor(1) {
}

void Proveedores::setIdproveedor(int id){
    _Idproveedor = id;
}

void Proveedores::setMarca(const char* marca){
    strcpy(_Marca, marca);
}

int Proveedores::getIdproveedor(){
    return _Idproveedor;
}

const char* Proveedores::getMarca(){
    return _Marca;
}

void Proveedores::cargar(){
    Persona::cargar();
    cout<< "INGRESAR EL ID DEL PROVEEDOR: ";
    cin>>_Idproveedor;
    cout<< "INGRESAR LA CATEGORIA: ";
    //cin>> Categoria.setID();
}

void Proveedores::mostrar(){
    Persona::mostrar();
    cout<< "INGRESAR EL ID DEL PROVEEDOR: "<<getIdproveedor()<<endl;
    //cout<< "CATEGORIA: "<<categoria.getNombreCategoria()<<endl;

}

bool Proveedores::escribirDisco(int pos){}

bool Proveedores::leerDisco(int pos){}
