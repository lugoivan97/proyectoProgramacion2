#pragma once

class Devoluciones{
    public:
        Devoluciones();
        void setIDProducto(int id);
        void setIngresoDevolucion(const char* fecha);
        void setIDCliente(int idCliente);
        void setPosibilidadDevolucion(bool posDevolucion);
        int getIDProducto();
        const char* getIngresoDevolucion();
        int getIDCliente();
        bool getPosibilidadDevolucion();
        void cargar();
        void mostrar();
        bool escribirDisco(int pos);
        bool leerDisco(int pos);

    private:
        int _IDProducto;
        char _ingresoDevolucion[16];
        int _IDCliente;
        bool _posDevolucion;
};
