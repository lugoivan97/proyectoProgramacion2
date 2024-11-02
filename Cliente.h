#pragma once
#include "persona.h"

class Cliente:public Persona{
public:
    Cliente();
    Cliente(int puntaje);
    void setPuntaje(int Puntaje);
    int getPuntaje();
    void PuntajeMeta();
    void agregarPuntos(int puntos);
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
private:
    int _Puntaje;
};
