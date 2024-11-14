#include "devoluciones.h"
#include <cstring>
#include <string>
#include <iostream>
#include "productos.h"

using namespace std;

Devoluciones::Devoluciones(Producto& producto):_idProducto(producto){}

void Devoluciones::setIDProducto(int id){
    if(id>0){
        _idProducto.setIDProducto(id);
    }
}

void Devoluciones::setIngresoDevolucion(int dia, int mes, int anio){
    _ingresoDevolucion.setDia(dia);
    _ingresoDevolucion.setMes(mes);
    _ingresoDevolucion.setAnio(anio);
}

void Devoluciones::setIDProveedor(int idProveedor){
    if(idProveedor>0){
        _idProveedor.setIdproveedor(idProveedor);
    }
}

void Devoluciones::setDevolucionRealizada(bool DevolucionRealizada){
    _DevolucionRealizada=DevolucionRealizada;
}

void Devoluciones::setcantidadProductos(int cantidadProductos){
        _cantidadProductos=cantidadProductos;
}

int Devoluciones::getIDProducto(){
    return _idProducto.getIDProducto();
}

string Devoluciones::getIngresoDevolucion(){
    return _ingresoDevolucion.toString();
}

int Devoluciones::getIDProveedor(){
    return _idProveedor.getIdproveedor();
}

bool Devoluciones::getDevolucionRealizada(){
    return _DevolucionRealizada;
}

int Devoluciones::getcantidadProductos(){
    return _cantidadProductos;
}

void Devoluciones::DevolucionExitosa(){
    if(getDevolucionRealizada()==1){
                 int stockActual = _idProducto.getStock();
                 int cantidadADevolver = getcantidadProductos();
                 int nuevoStock = stockActual - cantidadADevolver;
                 if(nuevoStock<0){
                    cout<< "ERROR"<<endl;
                 }
                 _idProducto.actualizarStock(nuevoStock);
                 cout<< "LA DEVOLUCION FUE REALIZADA CON EXITO"<<endl;
    }
    else {
        cout<< "LA DEVOLUCION FUE CANCELADA EXITOSAMENTE"<<endl;
    }
}

void Devoluciones::ComparacionID(Producto producto){
    if(_idProducto.getIDProducto() == producto.getIDProducto()){
            DevolucionExitosa();
            mostrar();
    }else{
        cout << "EL PRODUCTO "<<_idProducto.getIDProducto()<<"NO COINCIDE"<< endl;
    }
}

void Devoluciones::cargar(Producto producto){
    int id, idproveedor, dia, mes, anio, cantidadProductos;
    bool confirmacion;
    char separador;
    cout<< "-------------"<<"DEVOLUCIONES AL PROVEEDOR"<< "-------------"<<endl;
    cout<< "INGRESAR EL ID DEL PRODUCTO: ";
    while(true){
        cin>>id;
        if(cin.fail()){
        cout<< "INCORRECTO. INTENTA NUEVAMENTE"<<endl;
        cout<< "INGRESAR EL ID DEL PRODUCTO: ";
        cin.clear();
        cin.ignore();
    }
    else{
        _idProducto.setIDProducto(id);
        break;
    }
    }
    cout<< "INGRESAR EL ID DEL PROVEEDOR: ";
    while(true){
        cin>>idproveedor;
        if(cin.fail()){
        cout<< "INCORRECTO. INTENTA NUEVAMENTE"<<endl;
        cout<< "INGRESAR EL ID DEL PROVEEDOR: ";
        cin.clear();
        cin.ignore();
    }
    else{
        _idProveedor.setIdproveedor(idproveedor);
        break;
    }
    }
    cout<< "INGRESAR FECHA DE DEVOLUCION: ";
    cin>> dia >> separador >> mes >> separador >> anio;
    setIngresoDevolucion(dia, mes, anio);
    cout<< "¿CUANTOS PRODUCTOS DEL ID "<<_idProducto.getIDProducto()<<" DESEA REALIZAR LA DEVOLUCION?"<<endl;
    cin>>cantidadProductos;
    setcantidadProductos(cantidadProductos);
    cout<< "¿DESEA FINALIZAR LA DEVOLUCION? "<< "0-NO 1-SI "<<endl;
    cin>>confirmacion;
    if(confirmacion==1){
        setDevolucionRealizada(1);
        ComparacionID(producto);
    }
    else {
        setDevolucionRealizada(0);
        cout<< "LA DEVOLUCION FUE CANCELADA"<<endl;
    }
    /*DevolucionExitosa():*/
}


void Devoluciones::mostrar(){
    cout<< "-------------"<<"DEVOLUCIONES AL PROVEEDOR"<< "-------------"<<endl;
    cout<< "ID DEL PRODUCTO: "<<_idProducto.getIDProducto()<<endl;
    cout<< "ID DEL PROVEEDOR: "<<_idProveedor.getIdproveedor()<<endl;
    cout<< "FECHA DE DEVOLUCION: "<<getIngresoDevolucion()<<endl;
    cout<< "CANTIDAD DE PRODUCTOS A DEVOLVER: "<<getcantidadProductos()<<endl;

    /*cout<< "STOCK ACTUAL: "<<_idProducto.getStock()<<endl;*/
}

bool Devoluciones::leerDisco(int pos){
}

bool Devoluciones::escribirDisco(int pos){
}
