// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 26/08/2023

// Fecha modificación: 26/08/2023

// Número de ejericio: 9

// Problema planteado: Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro
// arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
// Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el
// nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un
// desempeño mayor con relación al promedio del curso.

#include <iostream>
#include <string>

using namespace std;
int n, grade, hgrade = -1, lgrade = 101;
double suma = 0, average;
string name, major, hname, lname;

int main(){
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;
    cin.ignore(256, '\n');

    int grades[n];
    string names[n], majors[n];

    // Pude los datos de 'n' estudiantes y los guarda en los arreglos correspondientes
    for(int i = 1; i <= n; i++){ 
        cout << "\nIngrese el nombre del estudiante #" << i << ": ";
        getline(cin, name);

        names[i - 1] = name;
        cout << "Ingrese la nota del estudiante #" << i << ": ";
        cin >> grade;
        cin.ignore(256, '\n');
        grades[i - 1] = grade;
        suma += grade;

        cout << "Ingrese la carrera del estudiante #" << i << ": ";
        getline(cin, major);
        majors[i - 1] = major;
    }

    for(int i = 0; i < n; i++){
        if(grades[i] > hgrade){ // Determina la nota mayor
            hname = names[i]; // Guarda la nota del estudiante con la nota mayor
            hgrade = grades[i]; 
        }
        if(grades[i] < lgrade){ // Determina la nota menor
            lname = names[i]; // Guarda la nota del estudiante con la nota menor
            lgrade = grades[i];
        }
    }
    cout << "\nEl estudiante con la nota mas alta es: " << hname << endl;
    cout << "El estudiante con la nota mas baja es: " << lname << endl;

    average = suma / n;



    return 0;
}