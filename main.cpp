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
<<<<<<< HEAD
    Venta venta;
    venta.fecha.setDia(1);
    cout<< "EL DIA ES: "<<venta.fecha.getDia()<<endl;
=======
    Vendedor vendedor;
    vendedor.setNombres("LUCIA");
    cout<< "EL NOMBRE ES: "<<vendedor.getNombres()<<endl;

    Cliente cliente;
    cliente.setNombres("IVAN");
    cout<< "EL NOMBRE ES: "<<cliente.getNombres()<<endl;

    Proveedores proveedor;
    proveedor.setNombres("Marta");
    cout<< "EL NOMBRE ES: "<<proveedor.getNombres()<<endl;
>>>>>>> f5e728df51ac3003e4e31a0f77635e89d8f38240

    return 0;
}
