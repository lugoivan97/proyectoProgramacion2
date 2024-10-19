#include "productos.h"
#include <cstring>
#include <iostream>
using namespace std;

Producto::Producto(){
        _IDProducto=0;
        std::string _nombre="nombre";
        std::string _IDCategoria= "categoria";
        _precio=0.0f;
        std::string _ingreso= "fecha";
        _stock=0;
        std::string _descripcion="descripcion";

}

void Producto::setIDProducto(int id){
        _IDProducto=id;
}

void Producto::setNombre(char* nombre){
    strcpy(_nombre, nombre);
}

/*void Producto::setIDCategoria(char* categoria){
    strcpy(_IDCategoria, categoria);
}*/

void Producto::setPrecio(float precio){
        _precio=precio;
}

void Producto::setIngreso(char* fecha){
        strcpy(_ingreso, fecha);
}

void Producto::setStock(int stock){
        _stock=stock;
}

void Producto::setDescripcion(char* descripcion){
        strcpy(_descripcion, descripcion);
}

int Producto::getIDProducto(){
    return _IDProducto;
}

const char* Producto::getNombre(){
    return _nombre;
}

/*const char* Producto::getCategoria(){
    return _IDCategoria;
}*/

float Producto::getPrecio(){
    return _precio;
}

const char* Producto::getIngreso(){
    return _ingreso;
}

int Producto::getStock(){
    return _stock;
}

const char* Producto::getDescripcion(){
    return _descripcion;
}

void Producto::cargar(){
    cout<< "" <<endl;
}

void Producto::mostrar(){
    cout << "" <<endl;
}

bool Producto::escribirDisco(int pos){

}

bool Producto::leerDisco(int pos){

}
