#pragma once
#include "persona.h"

class Cliente:public Persona{
public:
    Cliente();
    Cliente (int idCliente, int puntos);
    void setIdCliente(int idCliente);
    void setPuntos(int Puntos);
    int getidCliente();
    int getPuntos();
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
private:
    int _IDCliente;
    int _Puntos;
};
