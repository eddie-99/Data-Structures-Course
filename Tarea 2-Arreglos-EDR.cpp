/*

2. Triangulo de pascal de 7 niveles
1,6,15,20,15,6,1
De la forma (a+b)^n, n+1 reprentando en número de filas

(a+b)^6

*/

#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define max 11
using namespace std;
void Titulos(int numeroTarea, char const *tema);

int main(void){
	
	Titulos(2, "Arreglos");
	
	int orden, matriz[max][max], espacio;
	
	cout <<"Introduzca valor de n(numero de fila): "; cin >> orden;
	cout << "Triangulo de Pascal de la forma (a+b)^" << orden - 1 << " \n";
	
	for (int i = 0; i < orden; i++){
		for (int j = 0; j <= i; j++){
			
			if(j == 0 || j == i ){
				matriz[i][j] = 1;	
			}
			
			else{
				 matriz[i][j] = matriz[i - 1][j - 1] + matriz[i - 1][j];	
			};
		};
		      
	};
	
	
	
	for (int i = 0; i < orden; i++){
		
		for(espacio = orden - i; espacio > 0; espacio--){
			cout << " ";
		};
		
	    for (int j = 0; j <= i; j++){
	    	cout << matriz[i][j] << " ";	
	    };
	    
	    cout << " \n";
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
