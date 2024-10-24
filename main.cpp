#include <iostream>
#include <cstring>
#include "cliente.h"
#include "vendedor.h"
#include "categoria.h"
#include "proveedores.h"
#include "persona.h"
#include "venta.h"
#include "FECHA.h"

using namespace std;

int main()
{
    Venta venta;
    venta.fecha.setDia(1);
    cout<< "EL DIA ES: "<<venta.fecha.getDia()<<endl;

    return 0;
}
