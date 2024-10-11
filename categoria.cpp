#include "categoria.h"
#include <cstring>

using namespace std;

Categoria::Categoria(){
    _ID=0;
    std::string _nombre="nombre";
}

void Categoria::setID(int id){
    _ID=id;
}

void Categoria::setNombre(char* nombre){
    strcpy(_nombre, nombre);
}

int Categoria::getID(){
   return _ID;
}

char Categoria::getNombre(){
    return _nombre;
}

void Categoria::cargar(){

};

void Categoria::mostrar(){

};

bool Categoria::escribirDisco(int pos){

};

bool Categoria::leerDisco(int pos){

};
