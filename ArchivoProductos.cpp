#include "ArchivoProductos.h"
#include <cstring>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

ArchivoProductos::ArchivoProductos(const char *nombreArchivoProducto){
    strcpy(_nombreArchivoProductos, nombreArchivoProducto);
}

ArchivoProductos::ArchivoProductos(){}

bool ArchivoProductos::grabarRegistroProducto(Producto producto){
        FILE *ArchivoProducto;
        ArchivoProducto=fopen(_nombreArchivoProductos, "ab");//si no puede hacer la apertura fopen devuelve NULL
        if(ArchivoProducto==NULL) return false;
        int escribir=fwrite(&producto,sizeof(producto),1,ArchivoProducto);
        fclose(ArchivoProducto);
        if (escribir==1){
            cout<< "¡NUEVO PRODUCTO AGREGADO!"<<endl;
            return true;
        }
        return false;
}

void ArchivoProductos::agregarRegistro(){
    ArchivoProductos archivo("archivoProductos.dat");
    Producto productos;
    productos.cargar();
    archivo.grabarRegistroProducto(productos);
}

bool ArchivoProductos::listarRegistros(){
    FILE *listadoProductos;
    Producto producto;
    listadoProductos=fopen(_nombreArchivoProductos, "rb");
    if(listadoProductos==NULL){
        cout<< "NO SE PUDO ABRIR EL ARCHIVO"<<endl;
        return false;
    }
    cout << left << setw(10) << "ID"
         << setw(30) << "NOMBRE"
         << setw(30) << "DESCRIPCION"
         << setw(10) << "PRECIO"
         << setw(15) << "STOCK"
         << setw(17) << "FECHA"
         << endl;
    cout << string(95, '-') << endl;


    while(fread(&producto, sizeof(Producto), 1, listadoProductos)==1){

             cout << left << setw(10) << producto.getIDProducto()
             << setw(30) << producto.getNombre()
             << setw(30) << producto.getDescripcion()
             << setw(10) << fixed << setprecision(2) << producto.getPrecio()
             << setw(15) << producto.getStock()
             << setw(17) << producto.getFecha()
             << endl;
        cout<<endl;
    }
    fclose(listadoProductos);
    return true;
}
