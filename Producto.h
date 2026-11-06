#pragma once
#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>

using namespace std;

// clase producto y articulos de miniso

class Producto {
private:
    string nombre;
    int id;
    double precio;
    int stock;
    string marca;
    string subCategoria;
public:
    //constructores y destructor
    Producto();
    Producto(string nombre, int id, double precio, int stock, string marca, string subCategoria);
    ~Producto();

    // getters y setters
    string getNombre() const;
    void setNombre(string nombre);

    int getId() const;
    void setId(int id);

    double getPrecio() const;
    void setPrecio(double precio);

    int getStock() const;
    void setStock(int stock);

    string getMarca() const;
    void setMarca(string marca);

    string getSubCategoria(string subCategoria);
};
#endif