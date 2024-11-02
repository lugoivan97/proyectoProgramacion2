#pragma once
#include "FECHA.h"
<<<<<<< HEAD
=======
#include <string>
>>>>>>> 83cab5e7c04f267c793303a50b1c04ff43a68df9

class Persona{
public:
    Persona();
    Persona(int id, const char* apellidos, const char* nombres, Fecha nacimiento, const char* telefono,const char* mail, const char* domicilio);
    void setId(int id);
    void setApellidos(const char* apellidos);
    void setNombres(const char* nombres);
<<<<<<< HEAD
=======
    //void setNacimiento(Fecha fecha);
>>>>>>> 83cab5e7c04f267c793303a50b1c04ff43a68df9
    void setNacimiento(int dia, int mes, int anio);
    void setEstado(bool estado);
    void setTelefono(const char* telefono);
    void setMail(const char* mail);
    void setDomicilio(const char* domicilio);
    int getId();
    const char* getApellidos();
    const char* getNombres();
<<<<<<< HEAD
=======
    std::string getNacimiento();
>>>>>>> 83cab5e7c04f267c793303a50b1c04ff43a68df9
    bool getEstado();
    const char* getTelefono();
    const char* getMail();
    const char* getDomicilio();
    std::string getNacimiento();
    bool ValidacionTelefono(const char* telefono);
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
protected:
    int _Id;
    char _Apellidos[100];
    char _Nombres[100];
<<<<<<< HEAD
=======
    Fecha _Nacimiento;
>>>>>>> 83cab5e7c04f267c793303a50b1c04ff43a68df9
    bool _Estado;
    char _Telefono[11];
    char _Mail[100];
    char _Domicilio[100];
    Fecha _Nacimiento;
};
