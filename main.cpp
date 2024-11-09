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
#include "devoluciones.h"
#include "ArchivoProductos.h"
<<<<<<< HEAD
=======

>>>>>>> 5c31e464d338569f62f6d37b7adcd12ed7ef7aad
using namespace std;

int main()
{

<<<<<<< HEAD
    /*Cliente cliente1; // Suponiendo que tienes un constructor que inicializa el cliente
    // Inicializar puntaje

    // Crear una venta asociada a un cliente
    detalleVenta venta1;
    venta1.cargar();
    cliente1.cargar();
    venta1.actualizarPuntaje(cliente1);
    venta1.mostrar();
    // Mostrar el puntaje del cliente después de la venta
    cliente1.mostrar();*/
    /*Fecha fecha(2, 11, 2024);
    Persona persona(12345678, "paz", "lucia", fecha, "12345678", "lulipaz@gmail.com", "san isidro");
=======
    /*ArchivoProductos archivo;

    Producto productos;
    productos.cargar();
    archivo.grabarRegistroProducto(productos);
>>>>>>> 5c31e464d338569f62f6d37b7adcd12ed7ef7aad

    archivo.listarRegistros();*/

<<<<<<< HEAD
    /*Producto producto;
=======
    Producto producto;


>>>>>>> 5c31e464d338569f62f6d37b7adcd12ed7ef7aad
    producto.cargar();
    producto.mostrar();*/

<<<<<<< HEAD
    /*Devoluciones devolucion(producto);  // Pasar el producto por referencia
    devolucion.cargar();
    devolucion.mostrar();*/


    /*ArchivoProductos archivo("archivoProductos.dat");
    archivo.listarRegistros();*/

    detalleVenta detalle1;
    Producto producto;
    producto.cargar();
    detalle1.cargar();
    detalle1.setPrecioTotal(producto);
    detalle1.mostrar();
=======
    Devoluciones devolucion(producto);
    devolucion.cargar(producto);

    cout << "actualizacion " << endl;
    producto.mostrar();

>>>>>>> 5c31e464d338569f62f6d37b7adcd12ed7ef7aad


    return 0;
}
