#include "Producto.h"

Producto::Producto() {
	nombre = "";
	id = 0;
	precio = 0.0;
	stock = 0;
	marca = "";
	subCategoria = "";
}

Producto::Producto(string nombre, int id, double precio, int stock, string marca, string subCategoria) {
	this->nombre = nombre;
	this->id = id;
	this->precio = precio;
	this->stock = stock;
	this->marca = marca;
	this->subCategoria = subCategoria;
}

Producto::~Producto() {}

// getters y setters
string Producto::getNombre() const {
	return nombre;
}
void Producto::setNombre(string nombre) {
	this->nombre = nombre;
}


int Producto::getId() const {
	return id;
}
void Producto::setId(int id) {
	this->id = id;
}


double Producto::getPrecio() const {
	return precio;
}
void Producto::setPrecio(double precio) {
	this->precio = precio;
}


int Producto::getStock() const {
	return stock;
}
void Producto::setStock(int stock) {
	this->stock = stock;
}


string Producto::getMarca() const {
	return marca;
}
void Producto::setMarca(string marca) {
	this->marca = marca;
}

string Producto::getSubCategoria() const {
	return subCategoria;
}
void Producto::setSubCategoria(string subCategoria) {
	this->subCategoria = subCategoria;
}


