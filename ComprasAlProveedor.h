#pragma once
#include "proveedores.h"
#include "productos.h"
#include "devoluciones.h"

class ComprasAlProveedor {
private:
    Proveedores _proovedor;
    Producto _producto;
    int _CantidadProductos;
    float _PrecioUnitario;
    float _PrecioTotal;

public:
    ComprasAlProveedor();
    ComprasAlProveedor(int CantidadProductos, float PrecioUnitario, float PrecioTotal);
    void setCantidadProductos(int CantidadProductos);
    void setPrecioUnitario(float PrecioUnitario);
    void setPrecioTotal(float PrecioTotal);

    int getCantidadProductos();
    float getPrecioUnitario();
    float getPrecioTotal();

    void cargar();
    void mostrar();
};
