#pragma once

class Persona{
public:
    Persona();
    void setId(int valor);
    void setApellidos(char* apellidos);
    void setNombres(char* nombres);
    void setNacimiento(char* fecha);
    void setEstado(bool estado);
    int getId();
    const char* getApellidos();
    const char* getNombres();
    const char* getNacimiento();
    bool getEstado();
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
protected:
    int _Id;
    char _Apellidos[100];
    char _Nombres[100];
    char _Nacimiento[15];
    bool _Estado;
};
