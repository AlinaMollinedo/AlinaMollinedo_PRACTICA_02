// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 25/08/2023

// Fecha modificación: 26/08/2023

// Número de ejericio: 6

// Problema planteado: Dados dos arreglos constantes de igual tamaño, generar un tercer arreglo con los elementos
// intercalados.
#include <iostream>

using namespace std;
int n, j = 0, a = 1;

int add_element(int arr[], int n){ // Función que permite al usuario llenar un arreglo
    cout << endl << "Arreglo #" << a << endl;
    int element;
    for(int i = 1; i <= n; i++){ 
        cout << "Ingrese el elemento #" << i << ": ";
        cin >> element;
        arr[i - 1] = element;
    }
    a++;
    return arr[n];
}

int main(){
    cout << "Ingrese la magnitud de los arreglos: ";
    cin >> n;

    int arr1[n], arr2[n], arr3[2 * n];

    // Llama a la función para llenar los arreglos 1 y 2
    arr1[n] = add_element(arr1, n);
    arr2[n] = add_element(arr2, n);

    for(int i = 0; i < 2 * n; i += 2){
        // Intercala los elementos de los arreglos 1 y 2 en el arreglo 3
        arr3[i] = arr1[j];
        arr3[i + 1] = arr2[j];
        j++;
    }
    cout << "\nArreglo con los elementos intercalados: " << endl;
    for(int i = 0; i < 2 * n; i++){ // Imprime los elementos del arreglo 3 
        cout << arr3[i] << " ";
    }
    return 0;
}