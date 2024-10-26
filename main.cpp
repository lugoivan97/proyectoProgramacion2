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
using namespace std;

int main()
{
    /*Fecha fecha;
    Vendedor vendedor(6.0f, 10000.0f, fecha);
    vendedor.mostrar();*/

    Cliente cliente;

    //cliente.setPuntaje(120);
    cout << cliente.getPuntaje() << endl;
    cliente.PuntajeMeta(120);
    //cout << cliente.getPuntaje() << endl;


    return 0;
}
