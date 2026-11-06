#include <iostream>
#include "Miniso.h"

using namespace std;
//No se, no miro anime
//main


int main() {
    setlocale(LC_ALL, "spanish");
    Miniso tienda;
    int opcion;

    do {
        cout << "\n== Miniso ==\n";
        cout << "1) Agregar Productos\n";
        cout << "2) Listar Productos\n";
        cout << "3) Eliminar Productos\n";
        cout << "4) Comprar\n";
        cout << "0) Salir\n";
        cout << "Ingrese la opción: ";

        while (!(cin >> opcion)) {
            cout << "Opción inválida. Intente de nuevo: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        switch (opcion) {
        case 1:
            tienda.agregarProductos();
            break;
        case 2:
            tienda.listarProductos();
            break;
        case 3:
            tienda.eliminarProductos();
            break;
        case 4:
            tienda.comprarProductos();
            break;
        case 0:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opción fuera de rango.\n";
        }
    } while (opcion != 0);

    return 0;
}
