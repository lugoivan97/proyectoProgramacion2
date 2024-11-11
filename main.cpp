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
#include "ComprasAlProveedor.h"
#include "ArchivoProductos.h"
using namespace std;

int main()
{
    /*ArchivoProductos archivo("archivoProductos.dat");
    archivo.listarRegistros();
    archivo.buscarProducto();*/

    Producto producto;
    producto.cargar();

    ComprasAlProveedor compras(producto);
    compras.cargar(producto);
    producto.mostrar();

    return 0;
}
