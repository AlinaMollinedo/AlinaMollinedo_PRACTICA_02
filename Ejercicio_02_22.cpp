// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 29/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 22

// Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector

#include <iostream>

using namespace std;
int N, v;

int main(){
    cout << "Ingrese la magnitud de los vectores: ";
    cin >> N;

    int vector1[N], vector2[N], vector3[N];

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

    for(int i = 0; i < N; i++){
        vector3[i] = vector1[i] * vector2[i]; // Multiplica los números en la misma posición de los vectores 1 y 2
    }

    cout << "\nVector 3:" << endl;
    for(int i = 0; i < N; i++){
        cout << vector3[i] << endl; // Imprime los elementos del vector 3
    }
    return 0;
}