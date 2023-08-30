// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 18

// Problema planteado: Programa que declare un vector de diez elementos enteros y pida números para rellenarlo
// hasta que se llene el vector o se introduzca un número negativo. Entonces se debe imprimir el
// vector (sólo los elementos introducidos)

#include <iostream>

using namespace std;
int nums[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, n, counter = 1;

int main(){
    while(n >= 0 && counter < 11){ // Se detiene al ingresar 10 números o si el número ingresado es negativo
        cout << "\nIngrese el numero #" << counter << ": ";
        cin >> n;
        nums[counter - 1] = n; // Añade los números ingresados a 'nums'
        counter++;
    }
    cout << endl;
    for(int i = 0; i < 10; i++){
        if(nums[i] >= 0){ // Imprime solamente los números positivos
            cout << nums[i] << " ";
        }
    }
    cout << endl;
    return 0;
}