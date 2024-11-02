#include <iostream>
#include <cstring>
#include "Vendedor.h"
#include "persona.h"

using namespace std;

Vendedor::Vendedor(float comision, float comisionPagada, Fecha fecha)
        :Persona(){
        _Comisiones=comision;
        _ComisionPagada=comisionPagada;
        _fecha=fecha;
}

<<<<<<< HEAD
Vendedor::Vendedor():Persona(1, "Apellido", "Nombre",_Nacimiento, "123456789", "sistema@gestion.com", "Florida"), _Comisiones(0.0), _ComisionPagada(0.0) {
=======
Vendedor::Vendedor():Persona(1, "Apellido", "Nombre", _Nacimiento, "123456789", "sistema@gestion.com", "Florida"), _Comisiones(0.0), _ComisionPagada(0.0) {
>>>>>>> 83cab5e7c04f267c793303a50b1c04ff43a68df9
}

void Vendedor::setComisiones(float comisiones){
    _Comisiones = comisiones;
}

void Vendedor::setComisionPagada(float comisionPagada){
    _ComisionPagada=comisionPagada;
}

float Vendedor::getComisiones(){
    return _Comisiones;
}

std::string Vendedor::getFecha(){
    return _fecha.toString();
}

void Vendedor::cargar(){
    cout<< "------------ "<<"DATOS DEL VENDEDOR"<< " --------------"<<endl;
    Persona::cargar();
    cout<< "MONTO DE COMISION: ";
    cin>>_Comisiones;
}

void Vendedor::mostrar(){
    cout<< "------------ "<<"DATOS DEL VENDEDOR"<< " --------------"<<endl;
    Persona::mostrar();
    cout << "Monto de comision: " <<getComisiones() << endl;
    cout << "Fecha de ingreso: " <<getFecha() << endl;
}

bool Vendedor::escribirDisco(int pos){}

bool Vendedor::leerDisco(int pos){}
