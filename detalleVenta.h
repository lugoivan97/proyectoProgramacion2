#pragma once
#include <string>
#include "Cliente.h"
#include "productos.h"

class detalleVenta{
    public:
        detalleVenta();
        detalleVenta(int idVenta, int idProducto, int cantidad, Producto producto, Cliente cliente);

        void setIDVenta(int idVenta);
        void setIDProducto(int idProducto);
        void setCantidad(int cantidad);
        /*void setPrecioUnitario(float precioUnitario);*/
        void setPrecioTotal(Producto producto); //agrego para mostrar
        void setPuntosGanados(int puntosGanados);

        int getIdPersona();
        int getIDVenta();
        int getIDProducto();
        int getCantidad();
        /*float getPrecioUnitario();*/
        float getPrecioTotal();

        float CalcularTotal(Producto producto);
        void actualizarPuntaje(Cliente& cliente);
        void ContarPuntos(Cliente& cliente, int idVenta); /* Para contar los puntos */
        int getPuntosGanados();

        void cargar();
        void mostrar();
        bool leerDisco(int pos);
        bool escribirDisco(int pos);

    private:
        int _IDVenta;
        int _IDProducto;
        int _cantidad;
        /*float _precioUnitario;*/
        float _precioTotal;
        int _puntosGanados;

};
