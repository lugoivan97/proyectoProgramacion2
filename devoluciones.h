#pragma once
#include "FECHA.h"
#include "proveedores.h"
#include "productos.h"

class Devoluciones{
    public:
<<<<<<< HEAD
        Devoluciones();
=======
>>>>>>> 5c31e464d338569f62f6d37b7adcd12ed7ef7aad
        Devoluciones(Producto& producto);
        //Devoluciones(Producto idProducto, Proveedores idProveedor, Fecha ingresoDevolucion, bool posDevolucion, int cantidadProductos);
        void setIDProducto(int id);
        void setIngresoDevolucion(int dia, int mes, int anio);
        void setIDProveedor(int idProveedor);
        void setDevolucionRealizada(bool DevolucionRealizada);
        void setcantidadProductos(int cantidadProductos);


        int getcantidadProductos();
        int getIDProducto();
        std::string getIngresoDevolucion();
        int getIDProveedor();
        bool getDevolucionRealizada();

        void ComparacionID(Producto producto);
        void DevolucionExitosa();
        void cargar(Producto producto);
        void mostrar();
        bool escribirDisco(int pos);
        bool leerDisco(int pos);

    private:
        Producto& _idProducto;
        Proveedores _idProveedor;
        Fecha _ingresoDevolucion;
        bool _DevolucionRealizada;
        int _cantidadProductos;
};
