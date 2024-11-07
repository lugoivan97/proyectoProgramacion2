#pragma once
#include "productos.h"

 class ArchivoProductos {
 private:
     char _nombreArchivoProductos[100];
 public:
    ArchivoProductos();
    //ArchivoProductos(const char *nombreArchivoProducto);
    bool grabarRegistroProducto(Producto producto);
    bool listarRegistros();
};
