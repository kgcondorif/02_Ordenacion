#include <iostream>

using namespace std;

void inserccionbinaria (int [], int);

int main () {
    int n;

    cout << "Ordenacion por inserccion binaria" << endl;
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

    inserccionbinaria(arreglo, n);

    cout << "Arreglo ordenado de forma ascendente: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}

void inserccionbinaria (int arreglo[], int n) {
    int k, aux, izq, der, medio;
    for (int i = 1; i < n; i++) {
        k = i;
        aux = arreglo[k];
        izq = 0;
        der = i - 1;
        while (izq <= der) {
            medio = (izq + der) / 2;
            if (aux < arreglo[medio]) {
                der = medio - 1;
            } else {
                izq = medio + 1;
            }
        }
        for (int j = i; j > izq; j--) {
            arreglo[j] = arreglo[j - 1];
        }
        arreglo[izq] = aux;
    }
}