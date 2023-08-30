// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 26/08/2023

// Fecha modificación: 26/08/2023

// Número de ejericio: 11

// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de
// este arreglo determine la desviación típica

#include <iostream>
#include <cmath>

using namespace std;
int n = 0, nn = 0;
double age, suma, average, summ, sx;

int main(){
    int ages[n];
    // Almacena las edades en el arreglo ages
    while(age != -1){
        cin >> age;
        ages[nn] = age;
        suma += age;
        n++;
        nn++;
    }
    
    average = (suma + 1) / (n - 1); // Calcula la media

    for(int i = 0; i < n - 1; i++){
        summ += pow(ages[i] - average, 2.0); // Calcula la sumatoria de cada número menos la media al cuadrado
    }

    sx = pow(summ / (n - 2), 1 / 2.0); // Calcula la desviación típica muestral

    cout << "\nLa desviacion tipica muestral de las edades es " << sx << endl;
    return 0;
}