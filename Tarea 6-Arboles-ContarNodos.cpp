/*

Arboles:
El uso de arboles desarrollando un programa que contabilice cuantos nodos tiene un arbol.


*/

#include <math.h>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#define CONT 10

using namespace std;
void Titulos(int numeroTarea, char const *tema);

//Declaraci�n del nodo
struct Nodo{
	int info;
	Nodo *izquierdo;
	Nodo *derecho;
};

Nodo *raiz = NULL;

void insertar(int x){
	struct Nodo *nuevo;
	nuevo = (struct Nodo*)malloc(sizeof(struct Nodo)); //Asignamos un nuevo nodo
	//Guardamos la informaci�n al nodo creado
	nuevo -> info = x;
	nuevo -> izquierdo = NULL;
	nuevo -> derecho = NULL;
	//Si nuestro �rbol esta vac�o apuntamos al nodo creado.
	if(raiz == NULL){
		raiz = nuevo;
	}
	//Dentro del while recorremos mediante una comparaci�n la informacion de x con el contenido del nodo
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
		//Cuando se encuentra un sub�rbol vac�o insertar el nodo en dicho sub�rbol
		if(x < anterior -> info){
			anterior -> izquierdo = nuevo;
		}else{
			anterior -> derecho = nuevo;
		}
	}
	
};

/*
La funci�n es recursiva, verificar con un if si est� apuntando a un nodo (esto es verdad si descender es distinto a NULL), 
en caso afirmativo ingresa al bloque del if y realiza:

     - Visitar la raiz.
     - Recorrer el sub�rbol izquierdo en pre-orden.
     - Recorrer el sub�rbol derecho en pre-orden.
     
La visita en este caso es la impresi�n de la informaci�n del nodo y los recorridos son las llamadas 
recursivas pasando las direcciones de los sub�rboles izquierdo y derecho.

la visita la realizamos entre las llamadas recursivas en el recorrido en Enorden.
*/
void imprimir(struct Nodo *descender, int espacio){
    // Si nuestra ra�z nuestra esta vac�a t�rminar el programa  
    if (descender == NULL){
		return;	
    }
  
    // Incrementar los espacios entre los niveles
    espacio += CONT; 
  
    // Primero los nodos del lado derecho 
    imprimir(descender -> derecho, espacio); 
  
    // Imprimimos los espacios entre los nodos
    cout<<endl; 
    for (int i = CONT; i < espacio; i++) 
        cout<<" "; 
    cout<<descender -> info <<"\n"; 
  
    // Despu�s los nodos del lado izquierdo
    imprimir(descender -> izquierdo, espacio); 
};


int contarNodos(struct Nodo *descender){
	int contador = 1;
	if(descender == NULL){
		return 0;
	}
	else{
		contador = contador + contarNodos(descender -> izquierdo);
		contador = contador + contarNodos(descender -> derecho);
		return contador;
	}
	
}


int main()
{
	Titulos(6, "Arboles");
	
    insertar(-4);
    insertar(-8);
    insertar(-19);
    insertar(-6);
    insertar(-59);
    insertar(-1);
    insertar(-57);
    insertar(-13);
    insertar(-18);
    insertar(4);
    insertar(-9);
    insertar(-44);
	insertar(-20);
	insertar(-7);
	insertar(-22);
	insertar(-11);
	insertar(-14);
	insertar(8);
	insertar(2);
	insertar(-20);
    cout << "Nodos (ARBOL BINARIO): " << endl;
    imprimir(raiz, 0);
    cout << endl;
    cout << endl << "Numero total de nodos en el arbol: " << contarNodos(raiz);
    return 0;
};



void Titulos(int numeroTarea, char const *tema){
	cout << "IPN/UPIICSA/CIENCIAS DE LA INFORMATICA" << endl;
    cout << "Materia: Estructuras y Representacion de Datos" << endl;
    cout << "Nombre: Edson Gustavo Arreola Gonzalez" << endl;
    cout << "Tarea no. "<< numeroTarea << endl;
    cout << "Tema: " << tema << endl << endl; 
};
