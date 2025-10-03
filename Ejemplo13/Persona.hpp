#ifndef PERSONA_HPP
#define PERSONA_HPP


class Persona
{
public:
    Persona(int edad);
    ~Persona();
    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
    void rendom();
    void ejRand();

private:
    bool genero;
    int edad;
    char dni[10] = {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X','0','\0' };;
};

#endif // PERSONA_HPP