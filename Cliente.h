#pragma once
#include "persona.h"

class Cliente:public Persona{
public:
    Cliente();
    Cliente (int idCliente, int puntos);
    void setIdCliente(int idCliente);
    void setPuntaje(int Puntos);

    int getidCliente();
    int getPuntaje();

    void PuntajeMeta(int puntaje);

    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
private:
    int _IDCliente;
    int _Puntaje;
};
