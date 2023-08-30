// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 28/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 14

// Problema planteado: Un arreglo contiene números al azar entre N y M, crear un segundo arreglo que contenga
// los números capicúa contenidos en el primero.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

using namespace std;
int N, M, n = 0;

int digit(int n){ // Cuenta los digitos del numero ingresado
    int digits = 0;
    while(n != 0){
        n = n / 10;
        digits++;
    }
    return digits;
}

int reverse(int n){ // Invierte las cifras del numero ingresado
    int rev = 0;
    int digits = digit(n);
    for(int i = digits - 1; i >= 0; i--){
        rev = rev + ((n % 10) * pow(10,i));
        n = n / 10;
    }
    return rev;
}

int main(){
    cout << "Ingrese el limite inferior del rango: ";
    cin >> N;
    cout << "Ingrese el limite superior del rango: ";
    cin >> M;

    srand(time(NULL));

    int range = 1 + rand() % 20, // Genera un rango de número aleatoriamente
    num[range], capicuas[n];

    // Almacena 'range' números al azar entre 'N' y 'M'
    for(int i = 0; i < range; i++){
        int x = N + rand() % (M - N);
        cout << x << " ";
        num[i] = x;
    }
    for(int i = 0; i < range; i++){
        int rev = reverse(num[i]); // Invierte cada número almacenado
        if(rev == num[i]){ // Si el número invertido es igual al original, se lo guarda en 'capicuas'
            capicuas[n] = num[i];
            n++;
        }
    }
    cout << endl;
    if(n == 0){ // n = 0 si no se encuentran capicúas
        cout << "No se encontraron capicuas." << endl;
    }
    else{
        for(int i = 0; i < n; i++){
        cout << capicuas[i] << " "; // Imprime los capicúas encontrados
        }
    }
    return 0;
}