// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 16

// Problema planteado: Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con datos
// leídos por el teclado. Copia los elementos del vector en otro vector pero en orden inverso, y
// muéstralo por la pantalla.

#include <iostream>
#include <string>

using namespace std;
string cadenas[5], inverso[5], cadena;

int main(){

    // Almacena las cadenas introducidas por teclado en 'cadenas'
    for(int i = 1; i <= 5; i++){
        cout << "Ingrese la cadena #" << i << ": ";
        getline(cin, cadena);
        cadenas[i - 1] = cadena;
    }
    // Inverso almacena las cadenas de 'cadenas' en orden inverso
    for(int i = 4; i >= 0; i--){
        inverso[4 - i] = cadenas[i];
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << inverso[i] << " ";
    }
    cout << endl;
}