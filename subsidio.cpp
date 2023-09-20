#include <iostream>

using namespace std;

int main() {
    int h, edad;
    char viuda;
    cout << "número de hijos: ";
    cin >> h;
    cout << "cuantos hijos con edad escolar (entre 6 y 18 años): ";
    cin >> edad;
    cout << "es viuda? v para si, c para no : ";
    cin >> viuda;
    double plata = 0.0;
    if (h <= 2) {
        plata = 70.0;
    } else if (h <= 5) {
        plata = 90.0;
    } else {
        plata = 120.0;
    }
    if (edad >= 6 && edad <= 18) {
        plata += 10.0 * h;
    }
    if (viuda == 'v') {
        plata += 20.0;
    }
    cout << "la plata es  " << plata << endl;

    return 0;
}
