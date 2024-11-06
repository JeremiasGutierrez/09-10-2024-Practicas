#ifndef Clientes_hpp
#define Clientes_hpp
#include <string>
using namespace std;


class Clientes
{
private:
    string id,nombre,apellido,edad,direccion;
public:
    Clientes(string _id,string _nombre,string _apellido,string _edad,string _direccion);
    string getId();
    string getNombre();
    string getApellido();
    string getEdad();
    string getDireccion();
};
#endif