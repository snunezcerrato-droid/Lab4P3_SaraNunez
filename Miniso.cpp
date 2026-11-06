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
	cout << "Ingresar el nombre del producto: ";
	cin >> nombre;

	cout << "Ingresar el id del producto: ";
	while (!(cin >> id) || id <= 0) {
		cout << "ID inválido. Ingrese un valor mayor a 0: ";
		cin.clear();
		cin.ignore(10000, '\n');
	}

	cout << "Ingresar el precio del producto: ";
	while (!(cin >> precio) || precio < 0) {
		cout << "Precio inválido. Ingrese un valor mayor o igual a 0: ";
		cin.clear();
		cin.ignore(10000, '\n');
	}

	cout << "Ingresar el stock de producto: ";
	while (!(cin >> stock) || stock < 0) {
		cout << "Stock inválido. Ingrese un valor mayor o igual a 0: ";
		cin.clear();
		cin.ignore(10000, '\n');
	}

	do {
		cout << "Ingresar la marca del producto [Sanrio/Disney]: ";
		cin >> marca;
		if (marca != "Sanrio" && marca != "Disney") {
			cout << "Marca no reconocida. Intente nuevamente.\n";
		}
	} while (marca != "Sanrio" && marca != "Disney");

	cout << "Ingrese la subCategoria: ";
	cin >> subCategoria;

	Producto nuevo(nombre, id, precio, stock, marca, subCategoria);
	listaProductos.push_back(nuevo);
	cout << "Producto " << nombre << " agregado con éxito.\n";
}


void Miniso::listarProductos() {
	if (listaProductos.empty()) {
		cout << "\nNo hay productos registrados en el inventario.\n";
		return;
	}

	cout << "\n== Inventario de Productos ==\n";
	for (size_t i = 0; i < listaProductos.size(); ++i) {
		cout << "-***" << i << "***-\n";
		cout << "Producto: " << listaProductos[i].getNombre() << "\n";
		cout << "Precio: " << listaProductos[i].getPrecio() << "\n";
		cout << "Id: " << listaProductos[i].getId() << "\n";
		cout << "Stock: " << listaProductos[i].getStock() << "\n";
		cout << "Marca: " << listaProductos[i].getMarca() << "\n";
		cout << "Sub Categoría: " << listaProductos[i].getSubCategoria() << "\n";
	}
}

void Miniso::eliminarProductos() {
	if (listaProductos.empty()) {
		cout << "\nNo hay productos para eliminar.\n";
		return;
	}

	listarProductos();
	int indice;
	cout << "Ingrese el índice del producto a eliminar: ";
	while (!(cin >> indice) || indice < 0 || indice >= listaProductos.size()) {
		cout << "Indice inválido. Intente nuevamente: ";
		cin.clear();
		cin.ignore(10000, '\n');
	}

	listaProductos.erase(listaProductos.begin() + indice);
	cout << "El elemento fue borrado con éxito.\n";
}

void Miniso::comprarProductos() {
	int tarjetazos = 10;
	char tablero[10][10];
	vector<char> carrito;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; ++j) {
			tablero[i][j] = ' ';
		}
	}
	srand(time(0));
	tablero[2][0] = 'L';
	tablero[3][0] = 'C';
	tablero[6][4] = 'V';
	tablero[7][3] = 'C';
	tablero[3][4] = 'F';

	while (tarjetazos > 0) {
		cout << "\nTe quedan " << tarjetazos << " tarjetazos.\n";
		cout << "  0 1 2 3 4 5 6 7 8 9\n";
		for (int i = 0; i < 10; i++) {
			cout << i << "|";
			for (int j = 0; j < 10; j++) {
				cout << tablero[i][j];
			}
			cout << "\n";
		}

		cout << "Carrito: [ ";
		for (char c : carrito) {
			cout << c << " ";
		}
		cout << "]\n";

		int fila, columna;
		cout << "Ingresa la fila (0-9): ";
		while (!(cin >> fila) || fila > 9) {
			cout << "Fila inválida (0-9).";
			cin.clear();
			cin.ignore(10000, '\n');
		}


	}
}


