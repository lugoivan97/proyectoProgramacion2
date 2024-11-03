#include "devoluciones.h"
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

Devoluciones::Devoluciones(){
}

Devoluciones::Devoluciones(Producto idProducto, Proveedores idProveedor, Fecha ingresoDevolucion, bool DevolucionRealizada, int cantidadProductos): _idProducto(idProducto), _idProveedor(idProveedor), _ingresoDevolucion(ingresoDevolucion), _DevolucionRealizada(DevolucionRealizada), _cantidadProductos(cantidadProductos){
}

void Devoluciones::setIDProducto(int id){
    _idProducto.setIDProducto(id);
}

void Devoluciones::setIngresoDevolucion(int dia, int mes, int anio){
    _ingresoDevolucion.setDia(dia);
    _ingresoDevolucion.setMes(mes);
    _ingresoDevolucion.setAnio(anio);
}

void Devoluciones::setIDProveedor(int idProveedor){
    _idProveedor.setIdproveedor(idProveedor);
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
        cout<< "LA DEVOLUCION FUE REALIZADA CON EXITO"<<endl;
        int nuevoStock= _idProducto.getStock() - _cantidadProductos;
        _idProducto.setStock(nuevoStock);
    }
    else {
        cout<< "LA DEVOLUCION FUE CANCELADA EXITOSAMENTE"<<endl;
    }
}

void Devoluciones::cargar(){
    int id, idproveedor, dia, mes, anio;
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
    cin>>_cantidadProductos;
    cout<< "¿DESEA FINALIZAR LA DEVOLUCION? "<< "0-NO 1-SI "<<endl;
    cin>>confirmacion;

}

void Devoluciones::mostrar(){
    cout<< "-------------"<<"DEVOLUCIONES AL PROVEEDOR"<< "-------------"<<endl;
    cout<< "ID DEL PRODUCTO: "<<_idProducto.getIDProducto()<<endl;
    cout<< "ID DEL PROVEEDOR: "<<_idProveedor.getIdproveedor()<<endl;
    cout<< "FECHA DE DEVOLUCION: "<<getIngresoDevolucion()<<endl;
    DevolucionExitosa();
}

bool Devoluciones::leerDisco(int pos){
}

bool Devoluciones::escribirDisco(int pos){
}
