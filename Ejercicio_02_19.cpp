// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 19

// Problema planteado: Hacer un programa que inicialice un vector de números con valores aleatorios, y posterior
// ordene los elementos de menor a mayor

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int n;

int main(){
    cout << "Ingrese la magnitud del arreglo: ";
    cin >> n;

    srand(time(NULL));
    int vector[n], pos;

    for(int i = 0; i < n; i++){ // Almacena 'n' valores aleatorios entre 0 y 100 al vector
        int x = rand() % 100;
        cout << x << " ";
        vector[i] = x;
    }

    for(int i = 0; i < n; i++){ // Realiza ordenación por selección 
        int lowest = 101;
        for(int j = i; j < n; j++){
            if(vector[j] < lowest){
                pos = j;
                lowest = vector[j];
            }
        }
        // Cambia los valores de una posición a otra
        int temp = vector[i];
        vector[i] = lowest;
        vector[pos] = temp;
    }

    cout << endl << endl;
    for(int i = 0; i < n; i++){
        cout << vector[i] << " ";
    }
    return 0;
}