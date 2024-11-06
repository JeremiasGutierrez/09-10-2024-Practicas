#include <iostream>
#include "./include/Clientes.hpp"
#include "./include/Pedidos.hpp"
#include "./include/Articulos.hpp"

using namespace std;

int main()
{
    Clientes persona1("1","Papu","George","10","Avenida siempre viva");
    Articulos articulo1("a01","Camiseta",20.4f);
    Articulos articulo2("a02","Camiseta",20.4f);

    Pedidos pedido("p01",&persona1);
    pedido.addArticulo(&articulo1);

    pedido.mostrarPedidos();

    return 0;
}
