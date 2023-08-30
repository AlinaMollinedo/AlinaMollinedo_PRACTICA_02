// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 26/08/2023

// Fecha modificación: 26/08/2023

// Número de ejericio: 10

// Problema planteado: Dado un arreglo que contiene la población de los nueve departamentos del país y otro que
// contiene los nombres de estos departamentos, genere un básico grafico estadístico que
// muestre esta población (utilice un factor de escala), además indique el nombre del
// departamento que tiene la mayor población y el nombre del departamento que tiene la menor
// población.

#include <iostream>
#include <string>

using namespace std;
int population[9], popul, hpopul = -1, lpopul = 12000;
string names[] = {"La Paz", "Santa Cruz", "Cochabamba", "Tarija", "Chuquisaca", "Oruro", "Potosi", "Beni", "Pando"}, hname, lname;

int main(){
    for(int i = 0; i < 9; i++){
        cout << "Ingrese la poblacion de " << names[i] << " en miles de habitantes: ";
        cin >> popul;
        population[i] = popul;
    }

    for(int i = 0; i < 9; i++){
        if(population[i] > hpopul){
            hname = names[i];
            hpopul = population[i];
        }
        if(population[i] < lpopul){
            lname = names[i];
            lpopul = population[i];
        }
    }
    cout << endl << hpopul << endl;
    for(int i = hpopul; i > 0; i -= 100){
        cout << "|";
        for(int j = 0; j < 9; j++){
            if(population[j] >= i){
                cout << "\t[]"; 
            }
            else{
                cout << "\t  ";
            }
        }
        cout << endl;
    }
    for(int i = 0; i < 80; i++){
        cout << "-";
    }
    cout << "\n|\n0\tLP\tSC\tCB\tTJ\tCQ\tOR\tPT\tBN\tPN";
    
    cout << "\n\nEl departamento con la mayor poblacion es " << hname << endl;
    cout << "El departamento con la menor poblacion es " << lname << endl;
    return 0;    
}