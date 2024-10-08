#pragma once
#include <string>

class Venta{
    public:
        Venta();
        void setID(int id);
        void setFecha(char* fecha);
        void setIDCliente(int idCliente);
        void setIDVendedor(int idVendedor);
        void setFormaDePago(char* fp);
        void setEnvio(bool envio);
        int getID();
        char getFecha();
        int getIDCliente();
        int getIDVendedor();
        char getFormaDePago();
        bool getEnvio();
        void cargar();
        void mostrar();
        bool escribirDisco(int pos);
        bool leerDisco(int pos);

    private:
        int _ID;
        char _fecha[15];
        int _idCliente;
        int _idVendedor;
        char _formaDePago[50];
        bool _envio;
};
