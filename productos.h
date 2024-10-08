#pragma once
#include <string>

class Producto{
    public:
        Producto();
        void setIDProducto(int id);
        void setNombre(char* nombre);
        void setIDCategoria(char* categoria);
        void setPrecio(float valor);
        void setIngreso(char* fecha);
        void setStock(int valor);
        void setDescripcion(char* descripcion);
        int getIDProducto();
        char getNombre();
        char getCategoria();
        float getPrecio();
        int getIngreso();
        int getStock();
        char getDescripcion();
        void cargar();
        void mostrar();
        bool escribirDisco(int pos);
        bool leerDisco(int pos);

    private:
        int _IDProducto;
        char _nombre[100];
        char _IDCategoria[100];
        float _precio;
        char _ingreso;
        int _stock;
        char _descripcion[200];

};
