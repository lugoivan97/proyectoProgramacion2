#include "categoria.h"
#include <cstring>

using namespace std;

Categoria::Categoria(){
    _ID=0;
    strcpy(_nombre, "nombre");
}

Categoria::Categoria(int id, const char* nombreCategoria){
    _ID=id;
    strcpy(_nombreCategoria, nombreCategoria);

}

void Categoria::setID(int id){
    _ID=id;
}

void Categoria::setNombreCategoria(const char* nombreCategoria){
    strcpy(_nombreCategoria, nombreCategoria);
}

int Categoria::getID(){
   return _ID;
}

char Categoria::getNombre(){
    return _nombre;
}

void Categoria::cargar(){
    cout<< "ID DE LA CATEGORIA: ";
    cin>>_ID;
    cout<< "NOMBRE DE LA CATEGORIA: ";
    cin>>_nombreCategoria;
};

void Categoria::mostrar(){
    cout<< "ID DE LA CATEGORIA "<<getID()<<endl;
    cout<< "NOMBRE DE LA CATEGORIA "<<getNombreCategoria()<<endl;

};

bool Categoria::escribirDisco(int pos){

};

bool Categoria::leerDisco(int pos){

};
