#pragma once
#include "productos.h"

 class ArchivoProductos {
 private:
     char _nombreArchivoProductos[100];
 public:
    ArchivoProductos();
<<<<<<< HEAD
    ArchivoProductos(const char *nombreArchivoProducto="archivoProductos.dat");
    void agregarRegistro();
=======
    //ArchivoProductos(const char *nombreArchivoProducto);
>>>>>>> 5c31e464d338569f62f6d37b7adcd12ed7ef7aad
    bool grabarRegistroProducto(Producto producto);
    bool listarRegistros();
};
