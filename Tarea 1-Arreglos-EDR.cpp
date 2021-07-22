/*
1- Escribir un algoritmo para el uso de un arreglo bidimensional que lea el siguiente arreglo,
4,7,1,3,5
2,0,6,9,7
3,1,2,6,4
Recorrerla y que salga de esta manera
4,2,3
7,0,1
1,6,2
3,9,6
5,7,4
*/


#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void Titulos(int numeroTarea, char const *tema);



int main(void){
	Titulos(1, "Arreglos");

	int fila = 3, columna = 5;
	
	int matrix[3][5] = {
    {4, 7, 1, 3, 5},
    {2, 0, 6, 9, 7},
    {3, 1, 2, 6, 4},
  };
  
	int i, j;

	cout << "Matriz original" << endl;
	for(i = 0; i < fila; i++){
		for(j = 0; j < columna; j++){
			cout << " " << matrix[i][j];
		};
    	cout<<endl;
	};

	cout << endl;

    cout << "Matriz invertida" << endl;
	for(j = 0; j < columna; j++){
		for(i = 0; i < fila; i++){
			cout << " " << matrix[i][j];
		};
    	cout<<endl;
	};



	return 0;
};


void Titulos(int numeroTarea, char const *tema){
	cout << "IPN/UPIICSA/CIENCIAS DE LA INFORMATICA" << endl;
    cout << "Materia: Estructuras y Representacion de Datos" << endl;
    cout << "Nombre: Edson Gustavo Arreola Gonzalez" << endl;
    cout << "Tarea no. "<< numeroTarea << endl;
    cout << "Tema: " << tema << endl << endl; 
};

