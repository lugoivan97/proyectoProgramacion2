#include "ArchivoProductos.h"
#include <cstring>
#include <iostream>
<<<<<<< HEAD
#include <iomanip>
#include <fstream>
using namespace std;

ArchivoProductos::ArchivoProductos(const char *nombreArchivoProducto){
    strcpy(_nombreArchivoProductos, nombreArchivoProducto);
}
=======
using namespace std;

/*ArchivoProductos::ArchivoProductos(const char *nombreArchivoProducto.dat){
    strcpy(_nombreArchivoProductos.dat, nombreArchivoProducto.dat);
}*/
>>>>>>> 5c31e464d338569f62f6d37b7adcd12ed7ef7aad

ArchivoProductos::ArchivoProductos(){}

bool ArchivoProductos::grabarRegistroProducto(Producto producto){
        FILE *ArchivoProducto;
<<<<<<< HEAD
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
=======
        ArchivoProducto=fopen("ArchivoProductos.dat", "ab");//si no puede hacer la apertura fopen devuelve NULL
        if(ArchivoProducto==NULL) return false;
        int escribir=fwrite(&producto,sizeof(producto),1,ArchivoProducto);
        fclose(ArchivoProducto);
        return escribir;
>>>>>>> 5c31e464d338569f62f6d37b7adcd12ed7ef7aad
}

bool ArchivoProductos::listarRegistros(){
    FILE *listadoProductos;
    Producto producto;
<<<<<<< HEAD
    listadoProductos=fopen(_nombreArchivoProductos, "rb");
=======
    listadoProductos=fopen("ArchivoProductos.dat", "rb");
>>>>>>> 5c31e464d338569f62f6d37b7adcd12ed7ef7aad
    if(listadoProductos==NULL){
        cout<< "NO SE PUDO ABRIR EL ARCHIVO"<<endl;
        return false;
    }
<<<<<<< HEAD
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
=======
    while(fread(&producto, sizeof(Producto), 1, listadoProductos)==1){
        producto.mostrar();
>>>>>>> 5c31e464d338569f62f6d37b7adcd12ed7ef7aad
        cout<<endl;
    }
    fclose(listadoProductos);
    return true;
}
