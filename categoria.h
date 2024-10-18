#pragma once
#include <string>

class Categoria{
    public:
        Categoria();
        Categoria(int id, const char* nombreCategoria);
        void setID(int id);
        void setNombreCategoria(const char* nombreCategoria);
        int getID();
        char getNombreCategoria();
        void cargar();
        void mostrar();
        bool escribirDisco(int pos);
        bool leerDisco(int pos);

    private:
        int _ID;
        char _nombreCategoria[50];
};
