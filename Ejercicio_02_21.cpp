// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 21

// Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada
// uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.

#include <iostream>

using namespace std;
int vector1[5], vector2[5], vector3[5];

// Función que añade elementos a un arreglo
int add(int vector[5]){
    int v;
    for(int i = 0; i < 5; i++){
        cout << "Elemento #" << i + 1 << ": ";
        cin >> v;

        vector[i] = v;
    }
    return vector[5];
}

int main(){
    // Añade 5 números al vector 1
    cout << "Vector 1:" << endl;
    vector1[5] = add(vector1);

    // Añade 5 números al vector 2
    cout << "\nVector 2:" << endl;
    vector2[5] = add(vector2);

    for(int i = 0; i < 5; i++){
        vector3[i] = vector1[i] + vector2[i]; // Suma los números en la misma posición de los vectores 1 y 2
    }

    cout << "\nVector 3:" << endl;
    for(int i = 0; i < 5; i++){
        cout << vector3[i] << endl; // Imprime los elementos del vector 3
    }
    return 0;
}