#include <iostream>
#include <cstring>
#include "Vendedor.h"
#include "persona.h"

using namespace std;

Vendedor::Vendedor():Persona("Apellido", "Nombre", "01/01/2024"), _Comisiones(0.0) {
        strcpy(_Ingreso, "01/01/2024");
}

Vendedor::Vendedor(const char* apellidos, const char* nombres, const char* nacimiento,float comision, const char* ingreso)
        :Persona(apellidos, nombres, nacimiento), _Comisiones(comision){
        strcpy(_Ingreso, ingreso);
}

void Vendedor::setComisiones(float comisiones){
    _Comisiones = comisiones;
}

void Vendedor::setIngreso(const char* ingreso){
    strcpy(_Ingreso, ingreso);
}

float Vendedor::getComisiones(){
    return _Comisiones;
}

const char* Vendedor::getIngreso(){
    return _Ingreso;
}

void Vendedor::cargar(){
    cout<< "------------ "<<"DATOS DEL VENDEDOR"<< " --------------"<<endl;
    Persona::cargar();
    cout<< "MONTO DE COMISION: "<<_Comisiones<<endl;
    cout<< "FECHA DE INGRESO: "<<_Ingreso<<endl;
}

void Vendedor::mostrar(){
    cout<< "------------ "<<"DATOS DEL VENDEDOR"<< " --------------"<<endl;
    Persona::mostrar();
    cout << "Monto de comision: " <<getComisiones() << endl;
    cout << "Fecha de ingreso: " <<getIngreso() << endl;
}

bool Vendedor::escribirDisco(int pos){}

bool Vendedor::leerDisco(int pos){}
