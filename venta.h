#pragma once
#include <string>
#include "FECHA.h"

class Venta{
    public:
        Venta();
        void setIDVenta(int id);
        void setIDCliente(int idCliente);
        void setIDVendedor(int idVendedor);
        void setFormaDePago(char* fp);
        void setEnvio(bool envio);
        void setIDProducto(int idProducto);
        void setCantidad(int cantidad);
        void setPrecioUnitario(float precio);
        void setFecha(Fecha fecha);

        int getIDVenta();
        const char* getFecha();
        int getIDCliente();
        int getIDVendedor();
        const char* getFormaDePago();
        bool getEnvio();
        int getIDProducto();
        int getCantidad();
        float getPrecioUnitario();

        void CalcularTotal();
        void cargar();
        void mostrar();
        bool escribirDisco(int pos);
        bool leerDisco(int pos);

    private:
        int _IDVenta;
        int _idCliente;
        int _idVendedor;
        char _formaDePago[50];
        bool _envio;
        Fecha fecha;

        int _IDProducto;
        int _cantidad;
        float _precioUnitario;
};
