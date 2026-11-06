#pragma once
#ifndef MINISO_H
#define MINISO_H
#include <vector>
#include "Producto.h"
using namespace std;

//inventario
class Miniso {
private:
    vector<Producto> listaProductos;

public:
    //constructor y destructor
    Miniso();
    ~Miniso();

    //metodos
    void agregarProductos();
    void listarProductos();
    void eliminarProductos();
    void comprarProductos();
};

#endif

