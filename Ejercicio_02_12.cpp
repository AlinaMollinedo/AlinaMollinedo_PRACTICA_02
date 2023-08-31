// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 29/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 12

// Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro
// contiene los nombres de estos minerales, para obtener:
// - Buscar por nombre de mineral y desplegar la producción
// - Ordenar del mayor al menor (producción) y mostrar:
// Mineral Produccion ™
// SN 998.000
// SB 876.500
// AU 786.670
// PT 636.143
// AG 135.567
// CU 109.412

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
string minerals[] = {"AU","SB", "AG", "SN", "CU", "PT"}, mineral;
double prod[] = {786.67, 876.5, 135.567, 998, 109.412, 636.143};

int main(){
    cout << "Ingrese el nombre del mineral: ";
    getline(cin, mineral);

    // Busca el mineral ingresado en el arreglo e imprime su producción
    for(int i = 0; i < 6; i++){
        if(minerals[i] == mineral){
            cout << "\nProduccion de " << minerals[i] << " es de " << fixed << setprecision(3) << prod[i] << endl;
        }
    }

    int pos;

    for(int i = 0; i < 6; i++){ // Realiza ordenación por selección 
        int highest = -1;
        for(int j = i; j < 6; j++){
            if(prod[j] > highest){
                pos = j;
                highest = prod[j];
            }
        }
        // Cambia los valores de una posición a otra
        int temp1 = prod[i];
        prod[i] = highest;
        prod[pos] = temp1;

        string temp2 = minerals[i];
        minerals[i] = minerals[pos];
        minerals[pos] = temp2;
    }

    cout << "\nMineral\tProduccion" << endl;
    for(int i = 0; i < 6; i++){
        cout << minerals[i] << "\t" << prod[i] << endl;
    }

    return 0;
}