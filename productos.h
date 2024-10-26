#pragma once
#include <string>
#include "categoria.h"
#include "FECHA.h"

class Producto{
    public:
        Producto();
        Producto (int id, char* nombre, float precio, int stock, char* descripcion, Fecha fecha, Categoria categoria);
        void setIDProducto(int id);
        void setNombre(char* nombre);
        void setPrecio(float precio);
        void setStock(int stock);
        void setDescripcion(char* descripcion);
        std::string getFecha();
        void getCategoria();
        int getIDProducto();
        const char* getNombre();
        float getPrecio();
        int getStock();
        const char* getDescripcion();
        void cargar();
        void mostrar();
        bool escribirDisco(int pos);
        bool leerDisco(int pos);

    private:
        int _IDProducto;
        char _nombre[100];
        Categoria categoria;
        float _precio;
        Fecha fecha;
        int _stock;
        char _descripcion[200];

};
