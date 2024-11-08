#include "devoluciones.h"
#include <cstring>
#include <string>
#include <iostream>
#include "productos.h"

using namespace std;

Devoluciones::Devoluciones(Producto& producto):_idProducto(producto){}

void Devoluciones::setIDProducto(int id){
    if(id > 0){
        _idProducto.setIDProducto(id);
    }
}

void Devoluciones::setIngresoDevolucion(int dia, int mes, int anio){
    _ingresoDevolucion.setDia(dia);
    _ingresoDevolucion.setMes(mes);
    _ingresoDevolucion.setAnio(anio);
}

void Devoluciones::setIDProveedor(int idProveedor){
    if(idProveedor > 0){
        _idProveedor.setIdproveedor(idProveedor);
    }
}

void Devoluciones::setDevolucionRealizada(bool DevolucionRealizada){
    _DevolucionRealizada=DevolucionRealizada;
}

void Devoluciones::setcantidadProductos(int cantidadProductos){
    if(cantidadProductos > 0){
        _cantidadProductos=cantidadProductos;
    }

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
    int nuevoStock;
    if(getDevolucionRealizada()==1){
                 int stockActual = _idProducto.getStock();
                 int cantidadADevolver = getcantidadProductos();
                 int nuevoStock = stockActual - cantidadADevolver;
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
        cout << "PRODUCTO NO ENCONTRADO" << endl;
    }
}

void Devoluciones::cargar(Producto producto){
    int id, idproveedor, dia, mes, anio, cantidadProductos;
    bool confirmacion;
    char separador;
    cout<< "-------------"<<"DEVOLUCIONES AL PROVEEDOR"<< "-------------"<<endl;
    cout<< "INGRESAR EL ID DEL PRODUCTO: ";
    cin>>id;
    _idProducto.setIDProducto(id);
    cout<< "INGRESAR EL ID DEL PROVEEDOR: ";
    cin>>idproveedor;
    _idProveedor.setIdproveedor(idproveedor);
    cout<< "INGRESAR FECHA DE DEVOLUCION: ";
    cin>> dia >> separador >> mes >> separador >> anio;
    setIngresoDevolucion(dia, mes, anio);
    cout<< "¿CUANTOS PRODUCTOS DEL ID "<<_idProducto.getIDProducto()<<" DESEA REALIZAR LA DEVOLUCION?"<<endl;
    cin>>cantidadProductos;
    setcantidadProductos(cantidadProductos);
    cout<< "¿DESEA FINALIZAR LA DEVOLUCION? "<< "0-NO 1-SI "<<endl;
    cin>>confirmacion;
    ComparacionID(producto);
    //DevolucionExitosa();

}

void Devoluciones::mostrar(){
    cout<< "-------------"<<"DEVOLUCIONES AL PROVEEDOR"<< "-------------"<<endl;
    cout<< "ID DEL PRODUCTO: "<<_idProducto.getIDProducto()<<endl;
    cout<< "ID DEL PROVEEDOR: "<<_idProveedor.getIdproveedor()<<endl;
    cout<< "FECHA DE DEVOLUCION: "<<getIngresoDevolucion()<<endl;
}

bool Devoluciones::leerDisco(int pos){
}

bool Devoluciones::escribirDisco(int pos){
}
