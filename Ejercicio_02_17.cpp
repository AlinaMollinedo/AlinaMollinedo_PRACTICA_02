// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 17

// Problema planteado: Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno
// (comprendidas entre 0 y 100). A continuación, debe mostrar todas las notas, la nota media, la
// nota más alta que ha sacado y la menor.

#include <iostream>

using namespace std;
int grades[5], grade, suma, hgrade = -1, lgrade = 101;

int main(){
    for(int i = 1; i <= 5; i++){
        cout << "Ingrese la nota #" << i << ": ";
        cin >> grade;
        if(grade > 100 || grade < 0){ // Verifica que la nota esté en un rango del 0 al 100
            cout << "Invalido." << endl;
            i--;
        }
        else{
            grades[i - 1] = grade; // Añade la nota a 'grades'
            suma += grade; // Suma las notas
        }
    }
    for(int i = 0; i < 5; i++){
        if(grades[i] >= hgrade){
            hgrade = grades[i]; // Determina la nota mayor
        }
        else{
            if(grades[i] <= lgrade){
                lgrade = grades[i]; // Determina la nota menor
            }
        }
    }
    cout << "\nLas notas son: ";;
    for(int i = 0; i < 5; i++){
        cout << grades[i] << " ";
    }
    cout << "\nLa nota media es: " << suma / 5.0 << endl; // Saca e imprime la nota media
    cout << "La nota mas alta es: " << hgrade << endl;
    cout << "La nota mas baja es: " << lgrade << endl;
    return 0;
}