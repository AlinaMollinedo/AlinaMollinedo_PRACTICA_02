// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 25

// Problema planteado: Genere un vector de N elementos y llénelos aleatoriamente entre valores de 1 a 100 e
// indique el mayor elemento, el menor elemento y el promedio.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int N, mayor = -1, menor = 101;
double suma;

int main(){
    cout << "Ingrese la magnitud del vector: ";
    cin >> N;

    srand(time(NULL));
    int vector[N];

    for(int i = 0; i < N; i++){
        int x = 1 + rand() % (100 - 1);
        cout << x << " ";
        vector[i] = x;
        suma += x;
    }

    for(int i = 0; i < N; i++){
        if(vector[i] > mayor){
            mayor = vector[i];
        }
        if(vector[i] < menor){
                menor = vector[i];
            }
    }
    cout << "\n\nEl numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    cout << "El promedio es: " << suma / N << endl;

}
