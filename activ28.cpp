#include <iostream>
#include <string>

float importeTotalDia = 0;  

void ventaProductos() {
    int cantidad;
    float precio;
    float Importe = 0;

    std::cout << "Dime la cantidad de productos: ";
    std::cin >> cantidad;

    while (cantidad > 0) {
        if (cantidad <= 0) {
            std::cout << "La cantidad debe ser positiva" << std::endl;
            continue;
        }
        std::cout << "Dime el precio del producto: ";
        std::cin >> precio;

        if (precio <= 0) {
            std::cout << "El precio debe ser positivo" << std::endl;
            continue;
        }

        Importe += cantidad * precio;
        importeTotalDia += cantidad * precio;  
        std::cout << "Tu importe actual es de: " << Importe << std::endl;
        std::cout << "Dime la cantidad de productos (0 para terminar): ";
        std::cin >> cantidad;
    }
}

int main() {
    std::string usuario;
    std::string contra;
    int intentos = 3;

    while (intentos > 0) {
        std::cout << "Nombre de usuario: ";
        std::cin >> usuario;
        std::cout << "Contraseña: ";
        std::cin >> contra;

        if (usuario == "leo" && contra == "2b16") {
            std::cout << "Bienvenido al sistema" << std::endl;
            break;
        } else {
            std::cout << "Nombre o contraseña incorrectos. Intentos restantes: " << --intentos << std::endl;
        }

        if (intentos == 0) {
            std::cout << "Se ha alcanzado el número máximo de intentos" << std::endl;
            break;
        }
    }

    if (intentos > 0) {
        char continuar;
        do {
            ventaProductos();
            std::cout << "¿Quieres registrar otra venta? (s/n): ";
            std::cin >> continuar;
        } while (continuar == 's' || continuar == 'S');
        
        
        std::cout << "El importe total del día es: " << importeTotalDia << std::endl;
    }

    return 0;
}
