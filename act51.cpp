#include <iostream>
#include <string>
using namespace std;

float importeTotalDia = 0;  

void ventaProductos() {
    int cantidad;
    float precio;
    float Importe = 0;

    cout << "Dime la cantidad de productos: ";
    cin >> cantidad;

    while (cantidad > 0) {
        if (cantidad <= 0) {
            cout << "La cantidad debe ser positiva" << endl;
            continue;
        }
        cout << "Dime el precio del producto: ";
        cin >> precio;

        if (precio <= 0) {
            cout << "El precio debe ser positivo" << endl;
            continue;
        }

        Importe += cantidad * precio;
        importeTotalDia += cantidad * precio; 

        cout << "Tu importe actual es de: " << Importe << endl;
        cout << "Dime la cantidad de productos (0 para terminar): ";
        cin >> cantidad;
    }
}

int main() {
    string usuario;
    string contra;
    int intentos = 3;

    while (intentos > 0) {
        cout << "Nombre de usuario: ";
        cin >> usuario;
        cout << "Contraseña: ";
        cin >> contra;

        if (usuario == "leo" && contra == "2b16") {
            cout << "Bienvenido al sistema" << endl;
            break;
        } else {
            cout << "Nombre o contraseña incorrectos. Intentos restantes: " << --intentos << endl;
        }

        if (intentos == 0) {
            cout << "Se ha alcanzado el número máximo de intentos" << endl;
            break;
        }
    }

    if (intentos > 0) {
        char continuar;
        do {
            ventaProductos();
            cout << "¿Quieres registrar otra venta? (s/n): ";
            cin >> continuar;
        } while (continuar == 's' || continuar == 'S');
        
        
cout << "El importe total del día es: " << importeTotalDia << endl;
    }

    return 0;
}