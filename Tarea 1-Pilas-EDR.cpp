/*

IMPLEMENTACIÓN DE UNA PILA DE LIBROS

*/

#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#define MAXIMO_TAMANIO 10
using namespace std;

void Titulos(int numeroTarea, char const *tema);

class Pila{
	protected: 
		int A[MAXIMO_TAMANIO];
		int tope = -1;
		
	public: 
		void Insertar(int x);
		void Quitar();
		int Cima();
		bool PilaVacia();
		void Imprimir();
};


void Pila::Insertar(int x){
	if(tope  == MAXIMO_TAMANIO -1){
		cout << "Error: Desbordamiento de pila, no se puede insertar mas elementos" << endl;
		return; 
	}
	A[++tope] = x;
}

void Pila::Quitar(){
	if(tope == -1){
		cout << "Erro: la pila esta vacia, no hay elementos que quitar" << endl;
		return;
	}
	tope--;
}

int Pila::Cima(){
	return A[tope];
}

bool Pila::PilaVacia(void)
{
	return tope == -1; 
}

void Pila::Imprimir(){
	int i;
	cout << "Canasta: ";
	for(i = 0; i <= tope; i++){
		cout << A[i] << "  ";
	}
	cout << endl;
}


int main(void){
	
	Titulos(2, "Pilas");
	
	Pila Canasta;
	
	char opc;
	int misLibros[10] = {1, 2, 3, 4, 5, 6, 7, 8 ,9, 10};
	int i, libros;
	
	
	cout << "Inserte libros a la canasta(< 10): "; cin >> libros;
	
	for(i = 0; i < libros; i++){
		Canasta.Insertar(misLibros[i]);
		Canasta.Imprimir();
	};
	
	cout << "*************************************" << endl;
	cout << "Estado actual de la pila: " << endl;
	
	//Verificar si la pila esta vacía (EMPTY)
	if(Canasta.PilaVacia() == 1){
		cout << "La pila esta vacia" << endl;
	}else{
		cout << "La pila no esta vacia" << endl;
	}
	
	cout << "*************************************" << endl;
	
	do{
		
		cout << "Desea quitar libros de la canasta s/n" << endl;
		opc = getch();
		//Quitar elemntos a la pila (POP)
		Canasta.Quitar(); Canasta.Imprimir();
	}while(opc == 's');
	
	
	return 0;
}

void Titulos(int numeroTarea, char const *tema){
	cout << "IPN/UPIICSA/CIENCIAS DE LA INFORMATICA" << endl;
    cout << "Materia: Estructuras y Representacion de Datos" << endl;
    cout << "Nombre: Edson Gustavo Arreola Gonzalez" << endl;
    cout << "Tarea no. "<< numeroTarea << endl;
    cout << "Tema: " << tema << endl << endl; 
};



















