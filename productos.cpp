#include "productos.h"
#include <cstring>
#include <iostream>
using namespace std;

Producto::Producto(): categoria(), fecha(){
        _IDProducto=0;
        strcpy(_nombre, "nombre");
        _precio=0.0f;
        _stock=0;
        strcpy( _descripcion, "descripcion");

}

Producto::Producto(int id, char* nombre, float precio, int stock, char* descripcion, Fecha _fecha, Categoria _categoria){
    _IDProducto=id;
    strcpy(_nombre, nombre);
    _precio=precio;
    _stock=stock;
    strcpy(_descripcion, descripcion);
    categoria=_categoria;
    fecha=_fecha;
}

void Producto::setIDProducto(int id){
        _IDProducto=id;
}

void Producto::setNombre(char* nombre){
    strcpy(_nombre, nombre);
}

void Producto::setPrecio(float precio){
        _precio=precio;
}

void Producto::setStock(int stock){
        _stock=stock;
}

void Producto::setDescripcion(char* descripcion){
        strcpy(_descripcion, descripcion);
}

std::string Producto::getFecha(){
    return fecha.toString();
}

void Producto::getCategoria(){
    return categoria.mostrar();
}

int Producto::getIDProducto(){
    return _IDProducto;
}

const char* Producto::getNombre(){
    return _nombre;
}

float Producto::getPrecio(){
    return _precio;
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
