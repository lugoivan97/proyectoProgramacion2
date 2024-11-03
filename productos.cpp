#include "productos.h"
#include <cstring>
#include <iostream>
using namespace std;

Producto::Producto(): _categoria(), _fecha(){
        _IDProducto=0;
        strcpy(_nombre, "nombre");
        _precio=0.0f;
        _stock=0;
        strcpy( _descripcion, "descripcion");
}

Producto::Producto(int id, char* nombre, float precio, int stock, char* descripcion, Fecha fecha, Categoria categoria){
    _IDProducto=id;
    strcpy(_nombre, nombre);
    _precio=precio;
    _stock=stock;
    strcpy(_descripcion, descripcion);
    _categoria=categoria;
    _fecha=fecha;
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

void Producto::setFecha(int dia, int mes, int anio){
    _fecha.setDia(dia);
    _fecha.setMes(mes);
    _fecha.setAnio(anio);
}

void Producto::setCategoria(const Categoria& categoria){
    _categoria=categoria;
}

std::string Producto::getFecha(){
    return _fecha.toString();
}

const char* Producto::getCategoria(){
    return _categoria.getNombreCategoria();
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
    int dia, mes, anio;
    char separador;
    cout << "-----------------" << "INFORMACION DEL PRODUCTO"<< "-----------------" <<endl;
    cout<< "INGRESAR EL ID DEL PRODUCTO: ";
    cin>>_IDProducto;
    cout<< "INGRESAR NOMBRE DEL PRODUCTO: ";
    cin>>_nombre;
    cout<< "INDICAR DESCRIPCION DEL PRODUCTO: ";
    cin>>_descripcion;
    cout<< "INGRESAR EL PRECIO: $ ";
    cin>>_precio;
    cout<< "INGRESAR EL STOCK: ";
    cin>>_stock;
    cout<< "INDICAR FECHA: ";
    cin>> dia >> separador >> mes >> separador >> anio;
    setFecha(dia, mes, anio);
}

void Producto::mostrar(){
    cout << "-----------------" << "INFORMACION DEL PRODUCTO"<< "-----------------" <<endl;
    cout<< "ID DEL PRODUCTO: "<<getIDProducto()<<endl;
    cout<< "NOMBRE DEL PRODUCTO: "<<getNombre()<<endl;
    cout<< "DESCRIPCION DEL PRODUCTO: "<<getDescripcion()<<endl;
    cout<< "PRECIO: "<<getPrecio()<<endl;
    cout<< "STOCK DEL PRODUCTO: "<<getStock()<<endl;
    cout<< "FECHA: "<<getFecha()<<endl;
}

bool Producto::escribirDisco(int pos){

}

bool Producto::leerDisco(int pos){

}
