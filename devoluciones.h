#pragma once

class Devoluciones{
    public:
        Devoluciones();
        void setIDProducto(int id);
        void setIngresoDevolucion(char* fecha);
        void setIDCliente(int idCliente);
        void setPosibilidadDevolucion(bool posDevolucion);
        int getIDProducto();
        char getIngresoDevolucion();
        int getIDCliente();
        bool getPosibilidadDevolucion();
        void cargar();
        void mostrar();
        bool escribirDisco(int pos);
        bool leerDisco(int pos);

    private:
        int _IDProducto;
        char _ingresoDevolucion[15];
        int _IDCliente;
        bool _posDevolucion;
};
