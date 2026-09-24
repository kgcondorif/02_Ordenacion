#include <iostream>

using namespace std;

void shell (int [], int);

int main () {
    int n;

    cout << "Ordenacion por Metodo de Shell" << endl;
    cout << "Ingrese el numero de elementos: ";
    cin >> n;

    int arreglo[n];

    cout << "Ingrese los elementos del arreglo: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << "Areglo ingresado: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    shell(arreglo, n);

    cout << "Arreglo ordenado de forma ascendente: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}

void shell (int arreglo[], int n) {
    int k, aux;
    k = n + 1;
    while (k >= 1) {
        k = k / 2;
        for (int i = 0; i + k < n; i++) {
            aux = arreglo[i + k];
            int j = i;
            while (j >= 0 && aux < arreglo[j]) {
                j-= k;
            }
            for (int h = i + k; h > j + k; h-= k) {
                arreglo[h] = arreglo[h - k];
            }
            arreglo[j + k] = aux;
        }
    }
}