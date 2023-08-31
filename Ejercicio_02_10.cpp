// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 26/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 10

// Problema planteado: Dado un arreglo que contiene la población de los nueve departamentos del país y otro que
// contiene los nombres de estos departamentos, indique el nombre del departamento que tiene
// la mayor población y el nombre del departamento que tiene la menor población.

#include <iostream>
#include <string>

using namespace std;
int population[9], popul, hpopul = -1, lpopul = 12000;
string names[] = {"La Paz", "Santa Cruz", "Cochabamba", "Tarija", "Chuquisaca", "Oruro", "Potosi", "Beni", "Pando"}, hname, lname;

int main(){
    // Pide las poblaciones de los nueve departamentos
    for(int i = 0; i < 9; i++){
        cout << "Ingrese la poblacion de " << names[i] << " en miles de habitantes: ";
        cin >> popul;
        population[i] = popul;
    }

    for(int i = 0; i < 9; i++){
        if(population[i] > hpopul){ // Almacena el nombre del departamento con mayor población
            hname = names[i];
            hpopul = population[i];
        }
        if(population[i] < lpopul){ // Almacena el nombre del departamento con menor población
            lname = names[i];
            lpopul = population[i];
        }
    }
    
    cout << "\nEl departamento con la mayor poblacion es " << hname << endl;
    cout << "El departamento con la menor poblacion es " << lname << endl;
    return 0;    
}