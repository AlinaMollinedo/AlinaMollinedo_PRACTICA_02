// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 29/08/2023

// Fecha modificación: 29/08/2023

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
string minerals[] = {"SN", "SB", "AU", "PT", "AG", "CU"}, mineral;
double prod[] = {998, 876.5, 786.67, 636.143, 135.567, 109.412};

int main(){
    cout << "Ingrese el nombre del mineral: ";
    getline(cin, mineral);

    // Busca el mineral ingresado en el arreglo e imprime su producción
    for(int i = 0; i < 6; i++){
        if(minerals[i] == mineral){
            cout << "\nProduccion de " << minerals[i] << " es de " << fixed << setprecision(3) << prod[i] << endl;
        }
    }

    return 0;
}