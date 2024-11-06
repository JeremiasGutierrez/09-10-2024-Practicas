#include <iostream>
#include "./include/Pedidos.hpp"
#include "./include/Articulos.hpp"
using namespace std;

Pedidos::Pedidos(string _id, Clientes *_clientes)
{
    this->id = _id;
    this->clientes = _clientes;
    this->numArticulos = 0;

    for (int i = 0; i < 20; i++)
    {
        this->articulos[i] = nullptr;
    }
}

string Pedidos::getId()
{
    return this->id;
}

void Pedidos::addArticulo(Articulos *_articulos)
{
    if (numArticulos < 20)
    {
        articulos[numArticulos] = _articulos;
        numArticulos++;
    }
    else
    {
        cout << "No se pueden cargar mas articulos,alcanzo el maximo" << endl;
    }
}
void Pedidos::mostrarPedidos()
{
    cout << "Pedido nro: " << getId() << endl;
    cout<<"Cliente: "<<clientes->getNombre()<<" "<<clientes->getApellido()<<endl;
    cout<<"Direccion"<<clientes->getDireccion()<<endl;
    cout<<"Articulos:"<<endl;

    for(int i=0;i<numArticulos;i++){
        cout<<"Articulo: "<<articulos[i]->getNombre()<<"  Precio  "<<articulos[i]->getPrecio()<<"Id del articulo"<<articulos[i]->getId()<<endl;
    }
}