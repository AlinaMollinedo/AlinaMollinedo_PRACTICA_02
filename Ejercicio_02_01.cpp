// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 25/08/2023

// Fecha modificación: 25/08/2023

// Número de ejericio: 1

// Problema planteado: Almacenar un vector de tamaño N, con números al azar entre A y B, e imprima la suma de
// los componentes de índice par y la resta de los componentes de índice impar.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int n, a, b, even, odd;


int main(){
    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> n;
    cout << "Ingrese el limite inferior del rango: ";
    cin >> a;
    cout << "Ingrese el limite superior del rango: ";
    cin >> b;

    int v[n];
    srand(time(NULL));

    for(int i = 0; i < n; i++){
        int x = a + rand() % (b - a); // Genera números al azar entre a y b
        v[i] = x;
        cout << x << " ";
    }
    // Determina si cada elemento del arreglo es par o impar
    // Calcula la suma de números pares y de números impares
    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            even += v[i];
        }
        else{
            odd += v[i];
        }
    }
    cout << "\n\nLa suma de los numeros pares es: " << even << endl;
    cout << "La suma de los numeros impares es: " << odd << endl;
    return 0;
}