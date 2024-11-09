#include "detalleVenta.h"
#include "Cliente.h"
#include <iostream>
using namespace std;


detalleVenta::detalleVenta(){
    _IDVenta=0;
    _IDProducto=0;
    _cantidad=0;
    /*_precioUnitario=0.0f;*/
}

detalleVenta::detalleVenta(int idVenta, int idProducto, int cantidad, Producto producto, Cliente cliente){
    _IDVenta=idVenta;
    _IDProducto=idProducto;
    _cantidad=cantidad;
    /*_precioUnitario=precioUnitario;*/
    ContarPuntos(cliente, idVenta);
    _puntosGanados = 0;
}

void detalleVenta::setIDVenta(int idVenta){
    _IDVenta=idVenta;
}

void detalleVenta::setIDProducto(int idProducto){
<<<<<<< HEAD
    if(idProducto>0){
=======
    if( idProducto > 0){
>>>>>>> 5c31e464d338569f62f6d37b7adcd12ed7ef7aad
        _IDProducto=idProducto;
    }
}

void detalleVenta::setCantidad(int cantidad){
<<<<<<< HEAD
   if(cantidad>0){
        _cantidad=cantidad;
   }
}

void detalleVenta::setPuntosGanados(int puntosGanados){
    if(puntosGanados>0){
=======
    if(cantidad > 0){
        _cantidad=cantidad;
    }
}

void detalleVenta::setPuntosGanados(int puntosGanados){
    if(puntosGanados > 0){
>>>>>>> 5c31e464d338569f62f6d37b7adcd12ed7ef7aad
        _puntosGanados=puntosGanados;
    }
}

<<<<<<< HEAD
/*void detalleVenta::setPrecioUnitario(float precioUnitario){
    _precioUnitario=precioUnitario;
}*/

void detalleVenta::setPrecioTotal(Producto producto){
    if(getIDProducto()==producto.getIDProducto()){
        if(_cantidad>0 && producto.getPrecio()>0){
            _precioTotal=_cantidad*producto.getPrecio();
        }
        else {
            cout<< "CANTIDAD O PRECIO NO VALIDO"<<endl;
        }
    }
    else {
        cout<< "EL ID NO COINCIDE"<<endl;
=======
void detalleVenta::setPrecioUnitario(float precioUnitario){
    if(precioUnitario > 0){
        _precioUnitario=precioUnitario;
>>>>>>> 5c31e464d338569f62f6d37b7adcd12ed7ef7aad
    }
}

int detalleVenta::getIDVenta(){
    return _IDVenta;
}

int detalleVenta::getIDProducto(){
    return _IDProducto;
}

int detalleVenta::getCantidad(){
    return _cantidad;
}

/*float detalleVenta::getPrecioUnitario(){
    return _precioUnitario;
}*/
float detalleVenta::getPrecioTotal(){
    return _precioTotal;
}

/*float detalleVenta::CalcularTotal(Producto producto){
    return _cantidad*producto.getPrecio();
}*/

void detalleVenta::ContarPuntos(Cliente& cliente, int idVenta){
    if(getIDVenta()==idVenta){
        _puntosGanados=_cantidad*5;
        cliente.setPuntaje(cliente.getPuntaje() + _puntosGanados);
}
}

int detalleVenta::getPuntosGanados(){
    return _puntosGanados;
}

void detalleVenta::actualizarPuntaje(Cliente& cliente) {
        _puntosGanados = _cantidad * 5;
        cliente.agregarPuntos(_puntosGanados);
        if(cliente.getPuntaje()>100){
            cliente.PuntajeMeta();
        }
}

void detalleVenta::cargar(){
    cout<< "--------------"<< "DETALLE DE VENTA"<< "--------------"<<endl;
    cout<< "ID de VENTA: ";
    cin>>_IDVenta;
    cout<< "ID de PRODUCTO: ";
    cin>>_IDProducto;
    cout<< "CANTIDAD: ";
    cin>>_cantidad;
}

void detalleVenta::mostrar(){
    cout<< "--------------"<< "DETALLE DE VENTA"<< "--------------"<<endl;
    cout<< "ID DE VENTA: "<<getIDVenta()<<endl;
    cout<< "ID DE PRODUCTO: "<<getIDProducto()<<endl;
    cout<< "CANTIDAD: "<<getCantidad()<<endl;
    if(_precioTotal>0){
        cout<< "PRECIO: $ "<<getPrecioTotal()<<endl;
    }
    else{
        cout<< "EL ID NO COINCIDE"<<endl;
    }
}

bool detalleVenta::escribirDisco(int pos){
}

bool detalleVenta::leerDisco(int pos){
}
