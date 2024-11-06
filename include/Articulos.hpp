#ifndef Articulos_hpp
#define Articulos_hpp
#include <string>
using namespace std;

class Articulos
{
private:
    string id,nombre;
    float precio;
public:
    Articulos(string _id,string _nombre,float _precio);
    string getId();
    string getNombre();
    float getPrecio();
};
#endif
