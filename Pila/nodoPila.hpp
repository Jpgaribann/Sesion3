#include "nodoPila.hpp"

nodoPila::nodoPila(int v, nodoPila* sig)
{
    valor = v;
    siguiente = sig;
}

nodoPila::~nodoPila()
{
}