// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 15

// Problema planteado: Realizar un programa que defina un vector de 10 enteros, a continuación lo inicialice con
// valores aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada elemento del vector
// junto con su cuadrado y su cubo.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int nums[10];

int main(){
    srand(time(NULL));

    for(int i = 0; i < 10; i++){ // Almacena 10 números al azar del 1 al 10 en nums
        int x = 1 + rand() % (10 - 1);
        nums[i] = x;
    }
    for(int i = 0; i < 10; i++){
        cout << "\nNumero #" << i + 1 << ": " << nums[i] << endl;
        cout << "Cuadrado: " << nums[i] * nums[i] << endl; // Imprime el cuadrado de cada número del arreglo
        cout << "Cubo: " << nums[i] * nums[i] * nums[i] << endl; // Imprime el cubo de cada número del arreglo
    }
}
