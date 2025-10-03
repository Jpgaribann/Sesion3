#include "Persona.hpp"
#include "iostream"
#include <cstdlib>
#include <cstring>

using namespace std;

Persona::Persona(int edad)
{
    this->edad = edad;
    
}

Persona::~Persona()
{
    
}



Persona::getEdad()
{
    return edad;
    }
    
    

void Persona::setEdad(int edad)
{
    this->edad = edad;
    }

bool Persona::esMujer()
{
    if (genero==true )
        return true;

    else {
    return false;
    };
    }
    
void Persona::rendom()
{
     
     int numeroRandom = 18 + (rand() % 10);
     this->edad = numeroRandom;
     int sexoRandom =(rand() % 2);
     this->genero = sexoRandom;
     
}    
void Persona::ejRand()
{
    srand(time(NULL));
    }

void Persona :: mostrar()
{
    string mujerHombre;
    if (genero == 0) mujerHombre = "hombre";
    else mujerHombre = "mujer";
    cout << "La edad de esta persona es: "  << edad << " y es " << mujerHombre << " y su dni es: " ;
    for(int i = 0; i<10;i++){
        
        cout << dni[i];
        
        }
        cout << endl;
     

    }