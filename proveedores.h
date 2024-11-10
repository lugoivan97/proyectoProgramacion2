#pragma once

class Proveedores{
public:
    Proveedores();
    Proveedores(int id, const char* marca, bool estado, const char* contacto, const char* direccion);
    void setIdproveedor(int id);
    void setMarca(const char* marca);
    void setEstado(bool estado);
    void setContacto(const char* contacto);
    void setDireccionSucursal(const char* direccion);

    int getIdproveedor();
    const char* getMarca();
    const char* getEstado();
    const char* getContacto();
    const char* getDireccionSucursal();

    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
private:
    int _Idproveedor;
    char _Marca[50];
    bool _Estado;
    char _Contacto[50];
    char _Direccion[100];

};
