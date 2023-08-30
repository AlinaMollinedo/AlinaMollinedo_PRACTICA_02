// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 20

// Problema planteado: Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y
// diga cuántos días tiene (por ejemplo, 30) y el nombre del mes. Debes usar un vector. Para
// simplificarlo vamos a suponer que febrero tiene 28 días.

#include <iostream>

using namespace std;
int days[] = {31, 30, 28}, month;

int main(){
    cout << "Ingrese un mes en numeral: ";
    cin >> month;

    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout << "El mes tiene " << days[0] << " dias." << endl; // Imprime 31 días para los meses correspondientes
    }
    else{
        if(month == 4 || month == 6 || month == 9 || month == 11){
            cout << "El mes tiene " << days[1] << " dias." << endl; // Imprime 30 días para los meses correspondientes
        }
        else{
            if(month == 2){
                cout << "El mes tiene " << days[2] << " dias." << endl; // Imprime 28 días para febrero
            }
            else{
                cout << "Invalido" << endl;
            }
        }
    }
    return 0;
}