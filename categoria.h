#pragma once
#include <string>

class Categoria{
    public:
        Categoria();
        void setID(int id);
        void setNombre(char* nombre);
        int getID();
        char getNombre();
        void cargar();
        void mostrar();
        bool escribirDisco(int pos);
        bool leerDisco(int pos);

    private:
        int _ID;
        char _nombre[50];
};
