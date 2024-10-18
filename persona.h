#pragma once

class Persona{
public:
    Persona();
    Persona(const char* apellidos, const char* nombres, const char* fecha);
    void setId(int valor);
    void setApellidos(const char* apellidos);
    void setNombres(const char* nombres);
    void setNacimiento(const char* fecha);
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
