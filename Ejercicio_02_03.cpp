// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 25/08/2023

// Fecha modificación: 25/08/2023

// Número de ejericio: 3

// Problema planteado: Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el
// rango de A - B y determine cuántos de estos elementos son números primos.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int age, v[50], a, b;

int main(){
    cout << "Ingrese el limite inferior del rango: ";
    cin >> a;
    cout << "Ingrese el limite superior del rango: ";
    cin >> b;

    srand(time(NULL));

    for(int i = 0; i < 50; i++){
        int x = a + rand() % (b - a); // Genera números al azar entre a y b
        v[i] = x;
        cout << x << " ";
    }

    cout << "\n\nLos numeros primos del arreglo son: " << endl;

    for(int i = 0; i < 50; i++){
        int divider = 0;
        // Calcula el número de divisores de cada número del arreglo
        for(int j = 2; j < v[i]; j++){
            if(v[i] % j == 0){
                divider++;
            }
        }
        // Si la cantidad de divisores es 0, se imprime el número
        if(divider == 0){
            cout << v[i] << endl;
        }
    }
    return 0;
}