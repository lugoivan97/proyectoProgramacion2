#include "productos.h"
#include <cstring>

using namespace std;

Producto::Producto(){
        _IDProducto=0;
        _nombre[100]="nombre";
        _IDCategoria[100]="categoria";
        _precio=0.0f;
        _ingreso[15]="fecha";
        _stock=0;
        _descripcion[200]="descripcion";

}

void Producto::setIDProducto(int id){
        _IDProducto=id;
}

void Producto::setNombre(char* nombre){
    strcpy(_nombre, nombre);
}

void Producto::setIDCategoria(char* categoria){
    strcpy(_IDCategoria, categoria);
}

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

char Producto::getNombre(){
    return _nombre;
}

char Producto::getCategoria(){
    return _IDCategoria;
}

float Producto::getPrecio(){
    return _precio;
}

char Producto::getIngreso(){
    return _ingreso;
}

int Producto::getStock(){
    return _stock;
}

char Producto::getDescripcion(){
    return _descripcion;
}

void Producto::cargar(){
    cout << "" <<;
}

void Producto::mostrar(){
    cout << "" <<;
}

bool Producto::escribirDisco(int pos){

}

bool Producto::leerDisco(int pos){

}
