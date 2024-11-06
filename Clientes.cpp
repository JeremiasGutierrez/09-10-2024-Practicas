#include "./include/Clientes.hpp"
#include <string>

using namespace std;


Clientes::Clientes(string _id,string _nombre,string _apellido,string _edad,string _direccion)
{
    this->id=_id;
    this->nombre=_nombre;
    this->apellido=_apellido;
    this->edad=_edad;
    this->direccion=_direccion;
}

string Clientes::getId()
{
    return this->id;
}
string Clientes::getNombre()
{
    return this->nombre;
}
string Clientes::getApellido()
{
    return this->apellido;
}
string Clientes::getEdad()
{
    return this->edad;
}
string Clientes::getDireccion()
{
    return this->direccion;
}
