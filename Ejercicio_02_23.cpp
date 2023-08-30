// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 23

// Problema planteado: Leer 2 vectores de dimensión N y combine ambos en otro vector

#include <iostream>

using namespace std;
int N, v;

int main(){
    cout << "Ingrese la magnitud de los vectores: ";
    cin >> N;

    int vector1[N], vector2[N], vector3[2 * N];

    // Añade N números al vector 1
    cout << "Vector 1:" << endl;
    for(int i = 0; i < N; i++){
        cout << "Elemento #" << i + 1 << ": ";
        cin >> v;
        vector1[i] = v;
    }

    // Añade N números al vector 2
    cout << "\nVector 2:" << endl;
    for(int i = 0; i < N; i++){
        cout << "Elemento #" << i + 1 << ": ";
        cin >> v;
        vector2[i] = v;
    }

    // Combina los elementos de los vectores 1 y 2 en el vector 3
    for(int i = 0; i < N; i++){
        vector3[i] = vector1[i];
        vector3[i + N] = vector2[i];
    }

    cout << "\nVector 3:" << endl;
    for(int i = 0; i < 2* N; i++){
        cout << vector3[i] << endl; // Imprime los elementos del vector 3
    }
    return 0;
}