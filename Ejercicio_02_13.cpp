// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 26/08/2023

// Fecha modificación: 29/08/2023

// Número de ejericio: 13

// Problema planteado: Almacenar en un arreglo los n primeros números primos

#include <iostream>

using namespace std;
int n, num = 1;
bool flag = false;

// Devuelve 'verdadero' si el número ingresado es primo y 'falso' si no lo es
bool primo(int i){
    int divider = 0;
    for(int j = 2; j < i; j++){
        if(i % j == 0){
            divider++;
        }
        else{
            continue;
        }
    }
    if(divider == 0){
        flag = true;
    }
    else{
        flag = false;
    }
    return flag;
}

int main(){
    cout << "Ingrese la cantidad de numeros primos a almacenar: ";
    cin >> n;

    int prime[n];

    for(int i = 0; i < n; i++){
        while(flag != true){ // No se rompe hasta encontrar un número primo
            flag = primo(num);
            num++;
        }
        prime[i] = num - 1; // Al encontrarlo, se lo guarda en el arreglo
        flag = false; // Se resetea el valor de flag para repetir el proceso 'n' veces
    }

    for(int i = 0; i < n; i++){
        cout << prime[i] << " ";
    }
    return 0;
}