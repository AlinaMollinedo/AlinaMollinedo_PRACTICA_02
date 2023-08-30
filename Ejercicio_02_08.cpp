// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 26/08/2023

// Fecha modificación: 26/08/2023

// Número de ejericio: 8

// Problema planteado: Se tiene el arreglo
// Ventas:
// 0 1 2 10 11
// vene vfeb vmar . . vnov vdic
// Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que
// contiene los nombres de los meses:
// Meses:
// 0 1 2 10 11
// “Ene” “Feb” “Mar” . . “Nov” “Dic”
// Escriba un programa que obtenga:
// • ¿En qué mes(es) se dieron las ventas máximas de la empresa?
// • ¿A cuánto ascendieron las ventas máximas?
// • ¿Cuál fue el total de las ventas?
// Las ventas deben ser ingresadas por teclado.

#include <iostream>
#include <string>

using namespace std;
int sales[12], s, total, smax = -1;
string months[] = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"}, mmax[12];

int main(){
    for(int i = 0; i < 12; i++){
        // Pide y registra las ventas de cada mes
        cout << "Ventas " << months[i] << ": "; 
        cin >> s;
        sales[i] = s; 
        total += s; // Suma el total de ventas
        if(s > smax){ // Determina la venta máxima
            smax = s;
        }
    }
    for(int i = 0; i < 12; i++){
        if(sales[i] == smax){
            mmax[i] = months[i]; // Determina en qué mes se dió la venta máxima
        }
    }

    cout << "\nLas ventas maximas de la empresa se dieron en: ";
    for(int i = 0; i < 12; i++){
        if(mmax[i] != ""){
            cout << mmax[i] << " ";
        }
    }
    cout << "\nLas ventas maximas ascendieron a " << smax << " Bs." << endl;
    cout << "El total de ventas es " << total << " Bs." << endl; 
    return 0;
}