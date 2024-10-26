#pragma once

class Persona{
public:
    Persona();
    Persona(int id, const char* apellidos, const char* nombres, const char* fecha, const char* telefono,const char* mail, const char* domicilio);
    void setId(int id);
    void setApellidos(const char* apellidos);
    void setNombres(const char* nombres);
    void setNacimiento(const char* fecha);
    void setEstado(bool estado);
    void setTelefono(const char* telefono);
    void setMail(const char* mail);
    void setDomicilio(const char* domicilio);
    int getId();
    const char* getApellidos();
    const char* getNombres();
    const char* getNacimiento();
    bool getEstado();
    const char* getTelefono();
    const char* getMail();
    const char* getDomicilio();
    bool ValidacionTelefono(const char* telefono);
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
    char _Telefono[15];
    char _Mail[100];
    char _Domicilio[100];
};
