// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 25/08/2023

// Fecha modificación: 25/08/2023

// Número de ejericio: 2

// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros,
// determine el porcentaje de números pares positivos e impares negativos.

#include <iostream>

using namespace std;
int n, even, odd, v[10];

int main(){
    // Añade elementos ingresados por el usuario al arreglo
    for(int i = 1; i <= 10; i++){ 
        cout << "Ingrese el elemento #" << i << ": ";
        cin >> n;
        v[i - 1] = n;
    }
    // Evalua qué números del arreglo son pares positivos e impares negativos
    // Calcula la suma de cada estos
    for(int i = 0; i < 10; i++){
        if(v[i] % 2 == 0 && v[i] > 0){
            even++;
        }
        else{
            if(v[i] % 2 != 0 && v[i] < 0){
                odd++;
            }
        }
    }
    cout << "\n\nEl porcentaje de numeros pares positivos es: " << even * 10 << "%." << endl; // Saca el porcentaje de pares positivos
    cout << "El porcentaje de numeros impares negativos es: " << odd * 10 << "%." << endl; // Saca el porcentaje de impares negativos
    return 0;
}