#pragma once
#include <string>

class detalleVenta{
    public:
        detalleVenta();
        void setIDVenta(int id);
        void setIDProducto(int idProducto);
        void setCantidad(int cantidad);
        void setPrecioUnitario(float precio);
        int getIDVenta();
        int getIDProducto();
        int getCantidad();
        float getPrecioUnitario();
        void cargar();
        void mostrar();
        bool leerDisco(int pos);
        bool escribirDisco(int pos);
        productosXpuntaje(int IDproducto, int puntaje);

        void CalcularTotal();

    private:
        int _IDVenta;
        int _IDProducto;
        int _cantidad;
        float _precioUnitario;
};
