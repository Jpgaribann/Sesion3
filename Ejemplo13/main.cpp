#include "Persona.hpp"
#include "iostream"
#include <stdio.h>

using namespace std;


int main(int argc, char **argv)
{
    

    
    Persona Alberto(0);
    Alberto.ejRand();
    Alberto.rendom();
    Alberto.mostrar();
    
    
    Persona Juan(0);
    Juan.rendom();
    while(Juan.getEdad()==(Alberto.getEdad())){
        Juan.rendom();
        }
    Juan.mostrar();
    
    Persona Paula(0);
    Paula.rendom();
    while((Paula.getEdad()==Alberto.getEdad()) or (Paula.getEdad()==Juan.getEdad())){
        Paula.rendom();
        }
    Paula.mostrar();
    
    Persona MerYNer(0);
    MerYNer.rendom();
    while ((MerYNer.getEdad()==Alberto.getEdad()) or (MerYNer.getEdad()==Juan.getEdad()) or (MerYNer.getEdad()==Paula.getEdad())){
        MerYNer.rendom();
        }
    MerYNer.mostrar();
    
    Persona Aravella(0);
    Aravella.rendom();
    while (Aravella.getEdad()==Alberto.getEdad() or Aravella.getEdad()==Juan.getEdad() or Aravella.getEdad()==Paula.getEdad() or Aravella.getEdad()==MerYNer.getEdad()){
        Aravella.rendom();
        }
    Aravella.mostrar();
    
    Persona Viktor(0);
    Viktor.rendom();
    while (Viktor.getEdad()==Alberto.getEdad() or Viktor.getEdad()==Juan.getEdad() or Viktor.getEdad()==Paula.getEdad() or Viktor.getEdad()==MerYNer.getEdad() or Viktor.getEdad()==Aravella.getEdad()){
        Viktor.rendom();
        }
    Viktor.mostrar();
    
    Persona AlexElFriki(0);
    AlexElFriki.rendom();
    while (AlexElFriki.getEdad()==Alberto.getEdad() or AlexElFriki.getEdad()==Juan.getEdad() or AlexElFriki.getEdad()==Paula.getEdad() or AlexElFriki.getEdad()==MerYNer.getEdad() or AlexElFriki.getEdad()==Aravella.getEdad() or AlexElFriki.getEdad()==Viktor.getEdad()){
        AlexElFriki.rendom();
        }
    AlexElFriki.mostrar();
    
    Persona JuanPedro(0);
    JuanPedro.rendom();
    while (JuanPedro.getEdad()==Alberto.getEdad() or JuanPedro.getEdad()==Juan.getEdad() or JuanPedro.getEdad()==Paula.getEdad() or JuanPedro.getEdad()==MerYNer.getEdad() or JuanPedro.getEdad()==Aravella.getEdad() or JuanPedro.getEdad()==Viktor.getEdad() or JuanPedro.getEdad()==AlexElFriki.getEdad()){
        JuanPedro.rendom();
        }
    JuanPedro.mostrar();
    
     Persona ElCumpleDeDani(0);
    ElCumpleDeDani.rendom();
    while (ElCumpleDeDani.getEdad()==Alberto.getEdad() or ElCumpleDeDani.getEdad()==Juan.getEdad() or ElCumpleDeDani.getEdad()==Paula.getEdad() or ElCumpleDeDani.getEdad()==MerYNer.getEdad() or ElCumpleDeDani.getEdad()==Aravella.getEdad() or ElCumpleDeDani.getEdad()==Viktor.getEdad() or ElCumpleDeDani.getEdad()==AlexElFriki.getEdad()  or ElCumpleDeDani.getEdad()==JuanPedro.getEdad() ){
        ElCumpleDeDani.rendom();
        }
    ElCumpleDeDani.mostrar();
    
    Persona Julio(0);
    Julio.rendom();
    while (Julio.getEdad()==Alberto.getEdad() or Julio.getEdad()==Juan.getEdad() or Julio.getEdad()==Paula.getEdad() or Julio.getEdad()==MerYNer.getEdad() or Julio.getEdad()==Aravella.getEdad() or Julio.getEdad()==Viktor.getEdad() or Julio.getEdad()==AlexElFriki.getEdad()  or Julio.getEdad()==JuanPedro.getEdad() or Julio.getEdad()==ElCumpleDeDani.getEdad() ){
        Julio.rendom();
        }
    Julio.mostrar();
     
    
    
    

    
    
	return 0;
}
