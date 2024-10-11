#include <iostream>
#include "Vendedor.h"

using namespace std;

Vendedor::Vendedor(){
    _Comisiones = 0;
    _ingreso[15] = {01,01,2024};
}

void Vendedor::setComisiones(float comisiones){
    _Comisiones = comisiones;
}

void Vendedor::setIngreso(char ingreso){
}

float Vendedor::getComisiones(){
    return _Comisiones;
}

char Vendedor::getIngreso(){

}

void Vendedor::cargar(){}

void Vendedor::mostrar(){}

bool Vendedor::escribirDisco(){}

bool Vendedor::leerDisco(){}
