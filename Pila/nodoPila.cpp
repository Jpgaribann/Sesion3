#include <iostream>
using namespace std;

class nodoPila
{
public:
    nodoPila(int v, NodoPila* sig = NULL);
    ~NodoPila();

private:
    int valor;
    nodoPila* siguiente;
    friend class Pila;
};

typedef nodoPila* pnodoPila;