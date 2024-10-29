#pragma once
#include <string>

class detalleVenta{
    public:
        detalleVenta();
        detalleVenta(int idVenta, int idProducto, int cantidad, float precio, int puntosGanados);
        void setIDVenta(int idVenta);
        void setIDProducto(int idProducto);
        void setCantidad(int cantidad);
        void setPrecio(float precioUnitario);
        void setPuntosGanados(int puntosGanados);
        int getIdPersona();
        int getIDVenta();
        int getIDProducto();
        int getCantidad();
        float getPrecio();
        void CalcularTotal();

        void ContarPuntos(int idVenta); /* Para contar los puntos */
        int getPuntosGanados();

        void cargar();
        void mostrar();
        bool leerDisco(int pos);
        bool escribirDisco(int pos);

    private:
        int _IDVenta;
        int _IDProducto;
        int _cantidad;
        float _precioUnitario;
        int _puntosGanados;

};
