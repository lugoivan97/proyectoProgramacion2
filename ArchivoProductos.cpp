#include "ArchivoProductos.h"
#include <cstring>
#include <iostream>
using namespace std;

/*ArchivoProductos::ArchivoProductos(const char *nombreArchivoProducto.dat){
    strcpy(_nombreArchivoProductos.dat, nombreArchivoProducto.dat);
}*/

ArchivoProductos::ArchivoProductos(){}

bool ArchivoProductos::grabarRegistroProducto(Producto producto){
        FILE *ArchivoProducto;
        ArchivoProducto=fopen("ArchivoProductos.dat", "ab");//si no puede hacer la apertura fopen devuelve NULL
        if(ArchivoProducto==NULL) return false;
        int escribir=fwrite(&producto,sizeof(producto),1,ArchivoProducto);
        fclose(ArchivoProducto);
        return escribir;
}

bool ArchivoProductos::listarRegistros(){
    FILE *listadoProductos;
    Producto producto;
    listadoProductos=fopen("ArchivoProductos.dat", "rb");
    if(listadoProductos==NULL){
        cout<< "NO SE PUDO ABRIR EL ARCHIVO"<<endl;
        return false;
    }
    while(fread(&producto, sizeof(Producto), 1, listadoProductos)==1){
        producto.mostrar();
        cout<<endl;
    }
    fclose(listadoProductos);
    return true;
}
