#include <iostream>

using namespace std;

void inserccion (int [], int);

int main() {
    int n;

    cout << "Ordenacion por inserccion" << endl;
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

    inserccion(arreglo, n);

    cout << "Arreglo ordenado de forma ascendente: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}

void inserccion (int arreglo[], int n) {
    int k, aux;
    for (int i = 1; i < n; i++) {
        k = i;
        aux = arreglo[k];
        while (k > 0 && arreglo[i] < arreglo[k - 1]) {
            k--;
        }
        for (int j = i; j > k; j--) {
            arreglo[j] = arreglo[j - 1];
        }
        arreglo[k] = aux;
    }
}