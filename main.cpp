#include <iostream>
#include <cstring>
#include "cliente.h"
#include "vendedor.h"
#include "categoria.h"
#include "persona.h"

using namespace std;

int main()
{
    Vendedor vendedor;
    vendedor.setNombres("Lucia");
    cout<< "EL NOMBRE ES: "<<vendedor.getNombres()<<endl;
    return 0;
}
