#include <iostream>
using namespace std;

int main() {
    int c;
    cout << "Dime el numero de tu carta: ";
    cin >> c;
    if(c == 1) {
        cout << "Es un As";
    }
    else if(c == 10) {
        cout << "Es un sota";
    }
    else if(c == 11) {
        cout << "Es un caballo";
    }
    else if(c == 12) {
        cout << "Es un rey";
    }
    else if(c > 2 && c < 9) {
        cout << "No es ninguna figura en la baraja española";
    }
    else {
        cout << "No es ninguna carta en una baraja española";
    }

    return 0;
}
