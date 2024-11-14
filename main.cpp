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
#include "ArchivoComprasAlProveedor.h"
#include "ArchivoDevoluciones.h"
using namespace std;

int main()
{
    ArchivoProductos archivo("archivoProductos.dat");
    /*for(int i=0; i<5; i++){
        archivo.agregarRegistro();
        system("cls");
    }*/
    archivo.listarRegistros();

    ArchivoComprasAlProveedor archivoCOMPRAS("archivoComprasAlProveedor.dat");
    /*archivoCOMPRAS.agregarRegistro();*/
    /*archivoCOMPRAS.listarCompras();*/

    ArchivoDevoluciones devolucion("archivoDevoluciones.dat");
    /*devolucion.agregarDevolucion();*/
    devolucion.listarDevoluciones();
    return 0;

}
