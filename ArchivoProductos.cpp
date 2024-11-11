#include "ArchivoProductos.h"
#include <cstring>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

ArchivoProductos::ArchivoProductos(const char *nombreArchivoProducto){
    strcpy(_nombreArchivoProductos, nombreArchivoProducto);
}

/*ArchivoProductos::ArchivoProductos(const char *nombreArchivoProducto.dat){
    strcpy(_nombreArchivoProductos.dat, nombreArchivoProducto.dat);
}*/

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
    listadoProductos=fopen("ArchivoProductos.dat", "rb");
    if(listadoProductos==NULL){
        cout<< "NO SE PUDO ABRIR EL ARCHIVO"<<endl;
        return false;
    }
    cout << left << setw(10) << "ID"
         << setw(30) << "NOMBRE"
         << setw(35) << "DESCRIPCION"
         << setw(12) << "PRECIO"
         << setw(15) << "STOCK"
         << setw(17) << "FECHA"
         << endl;
    cout << string(105, '-') << endl;


    while(fread(&producto, sizeof(Producto), 1, listadoProductos)==1){

             cout << left << setw(10) << producto.getIDProducto()
             << setw(30) << producto.getNombre()
             << setw(35) << producto.getDescripcion()
             << setw(12) << fixed << setprecision(2) << producto.getPrecio()
             << setw(15) << producto.getStock()
             << setw(17) << producto.getFecha()
             << endl;
    }
    fclose(listadoProductos);
    return true;
}

bool ArchivoProductos::buscarProducto(){
    FILE *buscarProducto;
    Producto producto;
    buscarProducto=fopen(_nombreArchivoProductos, "rb");
    buscarProducto=fopen("ArchivoProductos.dat", "rb");
    if(buscarProducto==NULL){
        cout<< "NO SE PUDO ABRIR EL ARCHIVO"<<endl;
        return false;
    }
    int id;
    cout<< "INGRESAR EL ID DEL PRODUCTO A BUSCAR: ";
    cin>>id;
    while(fread(&producto, sizeof(Producto), 1, buscarProducto)==1){
        if(producto.getIDProducto()==id){
            producto.mostrar();
            fclose(buscarProducto);
            return true;
        }
    }
    cout<< "PRODUCTO NO ENCONTRADO"<<endl;
    fclose(buscarProducto);
    return false;
}
