#include <iostream>
#include <cstring>
#include "cliente.h"
#include "vendedor.h"
#include "categoria.h"
#include "proveedores.h"
#include "persona.h"
#include "venta.h"
#include "FECHA.h"
#include "productos.h"
#include "detalleVenta.h"
using namespace std;

int main()
{
    /*Fecha fecha;
    Vendedor vendedor(6.0f, 10000.0f, fecha);
    vendedor.mostrar();*/

    /*Cliente cliente;*/

    //cliente.setPuntaje(120);
    /*cout << cliente.getPuntaje() << endl;
    cliente.PuntajeMeta(120);*/
    //cout << cliente.getPuntaje() << endl;

    /*Cliente cliente;

    detalleVenta venta1(1, 1001, 3, 20.0f, cliente);
    detalleVenta venta2(1, 1002, 2, 15.0f, cliente);
    detalleVenta venta3(2, 1001, 1, 10.0f, cliente);


    cout<< "LOS PUNTOS SON PARA EL ID DE VENTA 1 SON: "<<venta1.getPuntosGanados()+venta2.getPuntosGanados()<<endl;*/

    Cliente cliente1; // Suponiendo que tienes un constructor que inicializa el cliente
    // Inicializar puntaje

    // Crear una venta asociada a un cliente
    detalleVenta venta1;
    venta1.cargar();
    cliente1.cargar();
    venta1.actualizarPuntaje(cliente1);
    venta1.mostrar();
    // Mostrar el puntaje del cliente después de la venta
    cliente1.mostrar();

    return 0;
}
