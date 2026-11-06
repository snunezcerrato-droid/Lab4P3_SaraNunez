#include "Miniso.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Miniso::Miniso() {}
Miniso::~Miniso() {}

void Miniso::agregarProductos() {
    setlocale(LC_ALL, "spanish");
    string nombre, marca, subCategoria;
    int id, stock;
    double precio;

    cout << "\n == Agregar Producto ==\n";
    cout << "Ingrese el nombre del producto: ";
    cin >> nombre;

    cout << "Ingresar el id del producto: ";
    while (!(cin >> id) || id <= 0) {
        cout << "ID inválido. Ingrese un valor mayor a 0: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }


    cout << "Ingresar el precio del producto: ";
    while (!(cin >> precio) || precio < 0) {
        cout << "Precio invalido. Ingrese un valor mayor o igual a 0: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "Ingresar el stock de producto: ";
    while (!(cin >> stock) || stock < 0) {
        cout << "Stock invalido. Ingrese un valor mayor o igual a 0: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
}