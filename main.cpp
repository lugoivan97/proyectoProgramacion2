#include <iostream>
#include <cstring>
#include "cliente.h"
#include "vendedor.h"
#include "categoria.h"
#include "persona.h"
#include "proveedores.h"

using namespace std;

int main()
{
    Vendedor vendedor;
    vendedor.setNombres("LUCIA");
    cout<< "EL NOMBRE ES: "<<vendedor.getNombres()<<endl;

    Cliente cliente;
    cliente.setNombres("IVAN");
    cout<< "EL NOMBRE ES: "<<cliente.getNombres()<<endl;

    Proveedores proveedor;
    proveedor.setNombres("Marta");
    cout<< "EL NOMBRE ES: "<<proveedor.getNombres()<<endl;

    return 0;
}
