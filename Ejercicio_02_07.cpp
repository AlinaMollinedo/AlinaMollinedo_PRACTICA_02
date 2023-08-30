// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 26/08/2023

// Fecha modificación: 26/08/2023

// Número de ejericio: 7

// Problema planteado: A partir de dos vectores constantes que contienen nombres de 7 personas cada uno.
// Escribir un programa que escriba la palabra “Iguales” si ambos vectores son iguales y
// “Diferentes” si no lo son. Serán iguales cuando en la misma posición de ambos vectores se
// tenga el mismo valor para todos los elementos.

#include <iostream>
#include <string>

using namespace std;
string arr1[7], arr2[7], name;

int main(){
    // Ingresa los nombres en el arreglo 1
    for(int i = 1; i <= 7; i++){ 
        cout << "Ingrese el nombre #" << i << ": ";
        getline(cin, name);
        arr1[i - 1] = name;
    }

    cout << endl;
    // Ingresa los nombres en el arreglo 2
    for(int i = 1; i <= 7; i++){ 
        cout << "Ingrese el nombre #" << i << ": ";
        getline(cin, name);
        arr2[i - 1] = name;
    }

    cout << endl;

    for(int i = 0; i < 7; i++){
        if(arr1[i] == arr2[i]){
            cout << "Posicion " << i << " : Iguales." << endl;  // Imprime 'iguales' si los nombres en la misma posición son iguales
        }
        else{
            cout << "Posicion " << i << " : Diferentes." << endl; // Imprime 'diferentes' si los nombres en la misma posición son diferentes
        }
    }
    return 0;
}
