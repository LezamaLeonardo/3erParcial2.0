#include <iostream>
using namespace std;

int main() {
    int n1,n2,n3;

     cout << "Ingresa el primer numero: ";
     cin >> n1;
     cout << "Ingresa el segundo numero: ";
     cin >> n2;
     cout << "Ingresa el tercer numero: ";
     cin >> n3;
     
    if (n1 == 1 , n2 == 2 , n3 == 3) {
        cout << "Acceso permitido";
    } else {
        cout << "Acceso no permitido";
    }

    return 0;
}