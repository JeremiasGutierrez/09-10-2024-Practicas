#include "./include/Articulos.hpp"
#include <string>
using namespace std;


Articulos::Articulos(string _id,string _nombre,float _precio){
    this->id=_id;
    this->nombre=_nombre;
    this->precio=_precio;
}

string Articulos::getId()
{
    return this->id;
}
string Articulos::getNombre()
{
    return this->nombre;
}
float Articulos::getPrecio()
{
    return this->precio;
}