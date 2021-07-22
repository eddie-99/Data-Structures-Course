/*

Arboles:
El uso de arboles desarrollando un programa que imprima el arbol binario en Preorden (nodo-izquierdo-derecho) (NID).


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

//Declaración del nodo
struct Nodo{
	int info;
	Nodo *izquierdo;
	Nodo *derecho;
};

Nodo *raiz = NULL;

void insertar(int x){
	struct Nodo *nuevo;
	nuevo = (struct Nodo*)malloc(sizeof(struct Nodo)); //Asignamos un nuevo nodo
	//Guardamos la información al nodo creado
	nuevo -> info = x;
	nuevo -> izquierdo = NULL;
	nuevo -> derecho = NULL;
	//Si nuestro árbol esta vacío apuntamos al nodo creado.
	if(raiz == NULL){
		raiz = nuevo;
	}
	//Dentro del while recorremos mediante una comparación la informacion de x con el contenido del nodo
	//Si es mayo bajamos por la derecha.
	//Si es menor por la izquiera
	else{
		struct Nodo *anterior, *descender;
		anterior = NULL;
		descender = raiz;
		while(descender != NULL){
			anterior = descender;
			if(x < descender -> info){
				descender = descender -> izquierdo;
			}else{
				descender = descender -> derecho;
			}
		}
		//Cuando se encuentra un subárbol vacío insertar el nodo en dicho subárbol
		if(x < anterior -> info){
			anterior -> izquierdo = nuevo;
		}else{
			anterior -> derecho = nuevo;
		}
	}
	
};


void imprimirPreOrden(struct Nodo *descender){
    // Si nuestra raíz nuestra esta vacía términar el programa  
    if (descender == NULL){
		return;	
    }
  
    //Pimero el nodo raiz
    cout<<descender -> info << " "; 
    
    // Después los nodos del lado izquierdo
    imprimirPreOrden(descender -> derecho); 
    
    // Por último los nodos del lado izquierdo
    imprimirPreOrden(descender -> izquierdo); 
    
};

int main(void){
	
	Titulos(7, "Arboles");
	
    insertar(-5);
    insertar(2);
    insertar(-11);
    insertar(4);
    insertar(-13);
    insertar(5);
    insertar(3);
    insertar(-14);
    insertar(1);
    insertar(6);
    insertar(10);
    insertar(-12);
	insertar(8);
	
	cout << "Nodos en PreOrden (nodo raiz-izquierdo-derecho): " << endl;
	imprimirPreOrden(raiz);
	cout << endl << endl;
	
	cout << "Nodo raiz: " << raiz -> info << endl;
	cout << "Nodos lado izquierdo: "; imprimirPreOrden(raiz -> izquierdo); cout << endl;
	cout << "Nodos lado derecho: "; imprimirPreOrden(raiz -> derecho); cout << endl;

	
	return 0;
};



void Titulos(int numeroTarea, char const *tema){
	cout << "IPN/UPIICSA/CIENCIAS DE LA INFORMATICA" << endl;
    cout << "Materia: Estructuras y Representacion de Datos" << endl;
    cout << "Nombre: Edson Gustavo Arreola Gonzalez" << endl;
    cout << "Tarea no. "<< numeroTarea << endl;
    cout << "Tema: " << tema << endl << endl; 
};

