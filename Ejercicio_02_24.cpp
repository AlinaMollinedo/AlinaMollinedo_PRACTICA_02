// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 24

// Problema planteado: Leer una cadena en mayúsculas y cámbielas en mayúsculas

#include <iostream>
#include <string>

using namespace std;
string cadena;

int main(){
    cout << "Ingrese una cadena de caracteres: ";
    getline(cin, cadena);

    int len = sizeof(cadena);

    for(int i = 0; i < len; i++){
        cadena[i] = toupper(cadena[i]);
    }
    cout << endl << cadena << endl;
}