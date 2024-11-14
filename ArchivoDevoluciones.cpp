#include "ArchivoDevoluciones.h"
#include <cstring>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

ArchivoDevoluciones::ArchivoDevoluciones(const char *nombreArchivoDevoluciones){
    strcpy(_nombreArchivoDevoluciones, nombreArchivoDevoluciones);
}

bool ArchivoDevoluciones::guardarDevolucion(Devoluciones devolucion){
    FILE *ArchivoDevolucion;
    ArchivoDevolucion=fopen(_nombreArchivoDevoluciones, "ab");
    if(ArchivoDevolucion==nullptr){
        cout<< "NO SE PUDO ABRIR EL ARCHIVO"<<endl;
        return false;
    }
    int escribir=fwrite(&devolucion, sizeof(devolucion), 1, ArchivoDevolucion);
    fclose(ArchivoDevolucion);
    if (escribir==1){
            cout<< "¡NUEVO PRODUCTO AGREGADO!"<<endl;
            return true;
    }

    return false;
}

void ArchivoDevoluciones::agregarDevolucion(){
    Producto producto;
    int idproducto;

    cout<< "INGRESE EL ID DEL PRODUCTO A DEVOLVER: ";
    cin>>idproducto;
    ArchivoProductos archivoProductos("archivoProductos.dat");
    if (!archivoProductos.buscarPRODUCTOID(idproducto, producto)) {
        cout << "PRODUCTO NO ENCONTRADO" << endl;
        return;
    }
    cout<< "stock antes de la devolucion: "<<producto.getStock()<<endl;
    Devoluciones devolucion(producto);
    devolucion.cargar(producto); // Cargar los detalles de la devolución
    ActualizarStockArchivoProductos(producto);
    archivoProductos.actualizarProducto(producto);

    if (!guardarDevolucion(devolucion)) {
        cout << "ERROR AL GUARDAR DEVOLUCION" << endl;
    }
}

bool ArchivoDevoluciones::ActualizarStockArchivoProductos(Producto& producto){
    FILE *archivoProductos=fopen("archivoProductos.dat", "rb+");
    if(archivoProductos==nullptr){
        cout<< "NO SE PUDO ABRIR EL ARCHIVO"<<endl;
        return false;
    }
    Producto ProductoEnArchivo;
    bool productoEncontrado=false;
    while (fread(&ProductoEnArchivo, sizeof(Producto), 1, archivoProductos)==1){
        if (ProductoEnArchivo.getIDProducto()==producto.getIDProducto()){
            fseek(archivoProductos, -sizeof(Producto), SEEK_CUR);
            fwrite(&producto, sizeof(Producto), 1, archivoProductos);
            productoEncontrado=true;
            break;
        }
    }
    fclose(archivoProductos);
    if(productoEncontrado==false){
        cout<< "PRODUCTO NO ENCONTRADO"<<endl;
        return false;
    }
    cout<< "STOCK ACTUALIZADO"<<endl;
    return true;
}

bool ArchivoDevoluciones::listarDevoluciones(){
    FILE *listadoDevoluciones;
    Producto producto;
    Devoluciones devolucion(producto);
    listadoDevoluciones=fopen(_nombreArchivoDevoluciones, "rb");
    if(listadoDevoluciones==NULL){
        cout<< "NO SE PUDO ABRIR EL ARCHIVO"<<endl;
        return false;
    }

    while(fread(&devolucion, sizeof(Devoluciones), 1, listadoDevoluciones)==1){
        devolucion.mostrar();
    }
    fclose(listadoDevoluciones);
    return true;

}


