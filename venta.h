#pragma once
#include <string>
#include "FECHA.h"
#include "detalleVenta.h"

class Venta{
    public:
        Venta();
        Venta(int idVenta, Cliente cliente, int idVendedor, char* fp, bool envio, Fecha fecha);
        void setIDVenta(int id);
        void setCliente();
        void setIDVendedor(int idVendedor);
        void setFormaDePago(char* fp);
        void setEnvio(bool envio);
        void setFecha(int dia, int mes, int anio);

        int getIDVenta();
        std::string getFecha();
        int getCliente();
        int getIDVendedor();
        const char* getFormaDePago();
        bool getEnvio();

        void cargar();
        void mostrar();
        bool escribirDisco(int pos);
        bool leerDisco(int pos);

    private:
        int _IDVenta;
        Cliente _cliente;
        int _idVendedor;
        char _formaDePago[50];
        bool _envio;
        Fecha _fecha;
};
