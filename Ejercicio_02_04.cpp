// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 25/08/2023

// Fecha modificación: 25/08/2023

// Número de ejericio: 4

// Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine:
// el porcentaje de mayores (>=18 años) y menores de edad (<18 años).

// Las edades al azar deben ser generadas a partir de 1 a 110 años.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int age, v[50], over18, under18;

int main(){

    srand(time(NULL));

    for(int i = 0; i < 50; i++){
        int x = 1 + rand() % (110 - 1); // Genera edades al azar entre 0 y 120 años
        v[i] = x;
        cout << x << " ";
    }

    // Determina el número de mayores y menores de edad
    for(int i = 0; i < 50; i++){
        if(v[i] >= 18){
            over18++;
        }
        else{
            under18++;
        }
    }
    cout << "\n\nEl porcentaje de mayores de edad es: " << over18 * 2 << "%." << endl; // Saca el porcentaje de mayores de edad
    cout << "El porcentaje de menores de edad es: " << under18 * 2 << "%." << endl; // Saca el porcentaje de menores de edad
    return 0;
}