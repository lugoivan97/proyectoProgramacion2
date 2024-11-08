#include "productos.h"
#include <limits>
#include <cstring>
#include <iostream>
using namespace std;

Producto::Producto(): _fecha(){
        _IDProducto=0;
        strcpy(_nombre, "nombre");
        _precio=0.0f;
        _stock=10;
        strcpy( _descripcion, "descripcion");
}

Producto::Producto(int id, char* nombre, float precio, int stock, char* descripcion, Fecha fecha){
    _IDProducto=id;
    strcpy(_nombre, nombre);
    _precio=precio;
    _stock=stock;
    strcpy(_descripcion, descripcion);
    _fecha=fecha;
}

void Producto::setIDProducto(int id){
        if(id > 0){
            _IDProducto=id;
        }
}

void Producto::setNombre(char* nombre){
    strcpy(_nombre, nombre);
}

void Producto::setPrecio(float precio){
        if(precio > 0){
            _precio=precio;
        }
}

void Producto::setStock(int stock){
        if(stock > 0){
            _stock=stock;
        }
}

void Producto::setDescripcion(char* descripcion){
        strcpy(_descripcion, descripcion);
}

void Producto::setFecha(int dia, int mes, int anio){
    _fecha.setDia(dia);
    _fecha.setMes(mes);
    _fecha.setAnio(anio);
}

std::string Producto::getFecha(){
    return _fecha.toString();
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

int Producto::actualizarStock(int stocknuevo){
     if(stocknuevo >= 0) {
        _stock = stocknuevo;
    }
}


void Producto::cargar(){
    int dia, mes, anio, IDProducto, stock;
    char separador, nombre[100], descripcion[200];
    float precio;
    cout << "-----------------" << "INFORMACION DEL PRODUCTO"<< "-----------------" <<endl;
    cout<< "INGRESAR EL ID DEL PRODUCTO: ";
    cin>>IDProducto;
    setIDProducto(IDProducto);
    cout<< "INGRESAR NOMBRE DEL PRODUCTO: ";
    cin.ignore();
    cin.getline(nombre, 100);
    setNombre(nombre);
    cout<< "INDICAR DESCRIPCION DEL PRODUCTO: ";
    cin.getline(descripcion, 200);
    setDescripcion(descripcion);
    cout<< "INGRESAR EL PRECIO: $ ";
    cin>>precio;
    setPrecio(precio);
    cout<< "INGRESAR EL STOCK: ";
    cin>>stock;
    setStock(stock);
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
