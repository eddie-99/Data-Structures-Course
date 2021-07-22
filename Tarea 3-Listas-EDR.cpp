/*

Listas enlazadas:
El uso de las listas considerando el uso de las principales operaciones borrar, insertar, tamaño, navegacion o recorrido y busqueda.


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


struct Nodo{
	int dato;
	Nodo *enlace;
};
struct Nodo* inicio_cabeza = NULL;

void Insertar(int x){
    struct Nodo* nuevo = (struct Nodo*)malloc(sizeof(struct Nodo)); //Asignamos un nuevo nodo
    nuevo->dato = x;
    nuevo->enlace = inicio_cabeza;
    inicio_cabeza = nuevo;
}



/* Function to delete the entire linked list */
void Eliminar(int key)
{

// Store head node
    struct Nodo* nuevo = inicio_cabeza;
    struct Nodo* prev = NULL;
     
    // If head node itself holds
    // the key to be deleted
    if (nuevo != NULL && nuevo->dato == key)
    {
        inicio_cabeza = nuevo->enlace; // Changed head
        delete nuevo;            // free old head
        return;
    }
 
    // Else Search for the key to be deleted,
    // keep track of the previous node as we
    // need to change 'prev->next' */
    else{
    while (nuevo != NULL && nuevo->dato != key)
    {
        prev = nuevo;
        nuevo = nuevo->enlace;
    }
 
    // If key was not present in linked list
    if (nuevo == NULL)
        return;
 
    // Unlink the node from linked list
    prev->enlace = nuevo->enlace;
 
    // Free memory
    delete nuevo;
    }
}







void Imprimir(){
	struct Nodo* nuevo = inicio_cabeza;
	cout << "Lista: ";
	while(nuevo != NULL){
		cout << nuevo->dato << " ";
		nuevo = nuevo->enlace;
	}
	cout << endl;
}









int main(void){
	Titulos(3, "Listas Enlazadas");
	
	int n, x, i;
	char opc;
	Nodo* inicio_cabeza = NULL;
	cout << "Cuantos numeros vas a insertar: "; cin >> n;
	cout << endl;
	
	for(i = 0; i <= n; i++){
		cout << "Inserte numero: "; cin >> x;
		Insertar(x);
		Imprimir();
		cout << "Desea eliminar (s/n): "; opc = getche(); cout << endl;
		if(opc == 's'){
			Eliminar(i);
			Imprimir();
		}
		
	}
	
	return 0;
}

























void Titulos(int numeroTarea, char const *tema){
	cout << "IPN/UPIICSA/CIENCIAS DE LA INFORMATICA" << endl;
    cout << "Materia: Estructuras y Representacion de Datos" << endl;
    cout << "Nombre: Edson Gustavo Arreola Gonzalez" << endl;
    cout << "Tarea no. "<< numeroTarea << endl;
    cout << "Tema: " << tema << endl << endl; 
};
