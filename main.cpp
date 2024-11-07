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

using namespace std;

int main()
{

    /*ArchivoProductos archivo;

    Producto productos;
    productos.cargar();
    archivo.grabarRegistroProducto(productos);

    archivo.listarRegistros();*/

    Producto producto;


    producto.cargar();
    producto.mostrar();

    Devoluciones devolucion(producto);
    devolucion.cargar(producto);

    cout << "actualizacion " << endl;
    producto.mostrar();



    return 0;
}
