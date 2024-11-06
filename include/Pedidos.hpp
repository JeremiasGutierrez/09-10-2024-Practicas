#ifndef Pedidos_hpp
#define Pedidos_hpp
using namespace std;
#include "Clientes.hpp"
#include "Articulos.hpp"
#include <string>

class Pedidos
{
private:
        string id;
        Clientes* clientes;
        Articulos* articulos[20];
        int numArticulos;
public:
    Pedidos(string _id,Clientes* _clientes);
    string getId();
    void addArticulo(Articulos* _articulos);
    void mostrarPedidos();
};
#endif