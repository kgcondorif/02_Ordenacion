#include <iostream>

using namespace std;

void quicksort(int [], int, int);

int main () {
    int n;

    cout << "Ordenacion por QuickSort" << endl;
    cout << "Ingrese el numero de elementos: ";
    cin >> n;

    int arreglo[n];

    cout << "Ingrese los elementos del arreglo: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << "Arreglo ingresado: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    quicksort(arreglo, 0, n - 1);

    cout << "Arreglo ordenado de forma ascendente: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}

void quicksort (int arreglo[], int inicio, int fin) {
    int k = inicio;
    int izq = inicio;
    int der = fin;
    int pivote = arreglo[inicio];
    
    while (izq < der) {
        for (der; der > izq; der--) {
            if (arreglo[der] < pivote) {
                arreglo[k] = arreglo[der];
                arreglo[der] = pivote;
                k = der;
                break;
            }
        }
        for (izq; izq < der; izq++) {
            if (arreglo[izq] > pivote) {
                arreglo[k] = arreglo[izq];
                arreglo[izq] = pivote;
                k = izq;
                break;
            }
        }
    }
    if (k - 1 > inicio) {
        quicksort(arreglo, inicio, k - 1);
    }
    if (k + 1 < fin) {
        quicksort(arreglo, k + 1, fin);
    }
}