/*
Trabajo final
Elaborar un proyecto de grafo, utilizando como modelo la red de transporte del metro de la Ciudad de 
México, con las siguientes consideraciones:
• Utilice la presentación con lospuntos mínimos (carátula, introducción, objetivos, ….. etc)
• Programación en C++
• Use como referencia la red del metro
• Al menos use tres líneas
• Mínimo diez nodo
*/

#include <math.h>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;
void Titulos(int numeroTarea, char const *tema);

const int MAX_NODOS = 10;

typedef int Valor_Nodo;
typedef int Valor_Arco;

typedef struct Arco *Puntero_Arco;

struct Arco{
	Valor_Arco Info; //Información asociada a cada arco 
	int Destino;
	Puntero_Arco Sig_Arco;
};

struct Nodo{
	Valor_Nodo Info; //Información asociada a cada nodo 
	bool Existe;
	Punt_Arco Lista_Arcos;
};

class Grafo{
	public:
	Grafo (void);
	bool Anadir_Nodo (Valor_Nodo);
	private:
	Nodo Nodos [MAX_NODOS];
};

//Inicialización del grafo
Grafo::Grafo(void){
	int i;
	
	for (i = 0; i < MAX_NODOS; i++){
		Nodos [i].Existe = false;
		Nodos [i].Lista_Arcos = NULL;
	}
};

bool Anadir_Nodo (Valor_Nodo x){
	int i_aux;
	bool b_aux;
	
	i_aux = 0;
	
	while ( (Nodos [i_aux].Existe == true) && (i_aux < MAX_NODOS) ){
		i_aux++;	
	};
	
	if (i == MAX_NODOS){
		b_aux = false;
	}else{
		b_aux = true;
		Nodos [i_aux].Existe := TRUE;
		gr.Nodos [ x.Nodo ].Info := x.Info;
	};
};



int main(void){
	
}














































































void Titulos(int numeroTarea, char const *tema){
	cout << "IPN/UPIICSA/CIENCIAS DE LA INFORMATICA" << endl;
    cout << "Materia: Estructuras y Representacion de Datos" << endl;
    cout << "Nombre: Edson Gustavo Arreola Gonzalez" << endl;
    cout << "Tarea no. "<< numeroTarea << endl;
    cout << "Tema: " << tema << endl << endl; 
};
