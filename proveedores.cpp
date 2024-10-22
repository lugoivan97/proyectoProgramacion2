#include <iostream>
#include "Proveedores.h"
#include "persona.h"

using namespace std;

Proveedores::Proveedores(int id, int cantidad, float precioTotal, const char* apellidos, const char* nombres, const char* fecha):Persona(apellidos, nombres, fecha){
   _Idproveedor = 0;
}

void Proveedores::setIdproveedor(int id){
    _Idproveedor = id;
}

int Proveedores::getIdproveedor(){
    return _Idproveedor;
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
