#include <iostream>

using namespace std;

void intercambiar(int[], int);

int main() {
    int n;

    cout << "Ordenacion por intercambio por senal" << endl;
    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> n;

    int arreglo[n];

    cout << "Ingrese los " << n << " numeros: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << "Arreglo ingresado: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    intercambiar(arreglo, n - 1);

    cout << "Arreglo ordenado de forma ascendente: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}

void intercambiar(int arreglo[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}