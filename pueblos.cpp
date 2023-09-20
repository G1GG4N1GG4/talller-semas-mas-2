#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> distancias = {50, 55, 57, 58, 60};

    int t = 174;

    int num_pueblos = 3;

    sort(distancias.begin(), distancias.end(), greater<int>());

    vector<int> distancias_seleccionadas;

    int suma_actual = 0;
    for (int distancia : distancias) {
        if (suma_actual + distancia <= t && num_pueblos > 0) {
            distancias_seleccionadas.push_back(distancia);
            suma_actual += distancia;
            num_pueblos--;
        } else {
            break;
        }
    
    cout << "Las distancias seleccionadas son:";
    for (int distancia : distancias_seleccionadas) {
        cout << " " << distancia;
    }
    cout << endl;

    int suma_total = 0;
    for (int distancia : distancias_seleccionadas) {
        suma_total += distancia;
    }
    cout << "La suma de las distancias es: " << suma_total << endl;

    return 0;
}
