#pragma once
#include <string>
#include "Cliente.h"
#include "productos.h"

class detalleVenta{
    public:
        /*detalleVenta();
        detalleVenta(int idVenta, int idProducto, int cantidad, float precioUnitario, Cliente cliente);*/
        detalleVenta();
        detalleVenta(Producto& producto, int cantidad);

        void setIDVenta(int idVenta);
        void setIDProducto(Producto producto);
        void setCantidad(int cantidad);
        void setPrecioUnitario(Producto producto);
        void setPuntosGanados(int puntosGanados);

        int getIdPersona();
        int getIDVenta();
        int getIDProducto();
        int getCantidad();
        float getPrecioUnitario();
        float getPrecioTotal();

        void RestarStock(Producto& producto, int idProducto, int cantidad);
        float CalcularTotal();
        void actualizarPuntaje(Cliente& cliente);
        void ContarPuntos(Cliente& cliente, int idVenta); /* Para contar los puntos */
        int getPuntosGanados();
        void setPrecioTotal(Producto producto);

        void cargar(Producto& producto);
        void mostrar();
        bool leerDisco(int pos);
        bool escribirDisco(int pos);

    private:
        int _IDVenta;
        int _IDProducto;
        int _cantidad;
        float _precioUnitario;
        float _precioTotal;
        int _puntosGanados;

};
