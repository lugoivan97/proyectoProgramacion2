#include <iostream>
#include <cstring>
#include "Cliente.h"
#include "persona.h"
using namespace std;

Cliente::Cliente(int puntaje):Persona(_Id, _Apellidos, _Nombres, _Nacimiento, _Telefono, _Mail, _Domicilio){
    _Puntaje=puntaje;
}

Cliente::Cliente():Persona(1, "Apellido", "Nombre", "01/01/2024", "123456789", "sistema@gestion.com.ar", "Florida 1234"), _Puntaje(0){
}

void Cliente::setPuntaje(int Puntaje){
    _Puntaje=Puntaje;
}

int Cliente::getPuntaje(){
    return _Puntaje;
}

void Cliente::PuntajeMeta(int puntaje)
{
    if(puntaje>0)
    {
        if(puntaje >=100)
        {
            int intentos = 0;
            int resto;
            while(intentos!=3)
            {
                cout << "¿EL CLIENTE DESEA CANJEAR SUS PUNTOS? " << endl;
                cout << " 1- Si / 2- No " << endl;
                int respuesta;
                cin >> respuesta;

                switch(respuesta)
                {
                case 1:
                    resto = _Puntaje - 100;
                    _Puntaje = resto;
                    intentos = 3;
                    cout << "¡Sus puntos han sido canjeados! " << endl;
                    cout <<"Cantidad de puntos que quedan disponibles: " << getPuntaje() << endl;
                    break;
                case 2:
                    cout << "Genial sus puntos quedan guardados para ser utulizados en una proxima ocacion " << endl;
                    break;
                default:
                    intentos++;
                    if(intentos == 3)
                    {
                        cout << "Llego al limite de intentos vuelva a intentarlo mas tarde " << endl;
                    }else{
                        cout << "Parece ser que los datos ingresado son incorrectos :( , vuelva a intentarlo " << endl;
                    }
                    break;
                }
                system("pause");
                system("cls");
            }
        }

    }
}


void Cliente::cargar(){
    cout<< "------------ "<<"DATOS DEL CLIENTE"<< " --------------"<<endl;
    Persona::cargar();
}

void Cliente::mostrar(){
    cout<< "------------ "<<"DATOS DEL CLIENTE"<< " --------------"<<endl;
    Persona::mostrar();
    cout<< "EL CLIENTE "<<" "<<Persona::getId()<<" "<<"TIENE UN PUNTAJE DE: "<<getPuntaje()<<endl;
}

bool Cliente::escribirDisco(int pos){}

bool Cliente::leerDisco(int pos){}
