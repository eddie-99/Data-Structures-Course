/*


Tarea para  entregar dentro de dos semanas (cola)
UPIICSA dispone de 20 computadoras conectadas a internet, se desea hacer una simulación de las computadoras utilizadas por los alumnos.
El tiempo de utilización por alumno es aleatorio, que va de los 30 min a 60 min
El programa debe registrar tiempo de inicio y tiempo de finalización.
En el debido caso que no haya computadoras disponibles se debe de mandar un mensaje "no hay computadoras disponibles"
El servicio es de 10 AM a 20:00 hrs.


*/

#include <math.h>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <time.h> 
#define MAXIMO_TAMANIO 21
using namespace std;
void Titulos(int numeroTarea, char const *tema);
	
class Cola{
	
	private: 
	int C[MAXIMO_TAMANIO];
	int frente, final, cuenta;
		
	public:
	void Crear();
	void Insertar(int x);
	int Quitar();
	bool colaVacia();
	bool colaLlena();
	void Imprimir();
	
};
	
	
void Cola::Crear(){
	frente = 0;
	final = 0;
	//cout << "*COLA CREADA*" << endl;
	//getch();
};
	
	
		
void Cola::Insertar(int x){
	// terminar si la cola está llena
	if (cuenta == MAXIMO_TAMANIO){
	cout << "No hay computadoras disponibles" << endl;
	exit (1);
};
	// incrementar cuenta, asignar elemento a C y actualizar el final
	cuenta++;
	C[final] = x;
	final = (final + 1) % MAXIMO_TAMANIO;
};




int Cola::Quitar(void){
	int aux;
	//si C está vacía, terminar el programa
	if (frente == final){
		cout << "La sala esta llena, no hay lugares disponibles" << endl;
		//cout << escribir() << endl;
		exit(1);
	};
	
	// registrar valor en el frente de la cola
	aux = C[frente];
	// decrementar cuenta, avanzar frente y devolver primero del frente
	cuenta--;
	frente = (frente + 1) % MAXIMO_TAMANIO;
	return aux;
};




bool Cola::colaVacia(){
	if(frente == 0 && final == 0){
		return 1;
	}
	
};




bool Cola::colaLlena(){
	if((final+1)% MAXIMO_TAMANIO == frente)
		return 1;
};



void Cola::Imprimir(){
	int i;
	cout << "Computadoras: ";
	for(i = frente; i < final; i++){
		cout << C[i] << "  ";
	}
	cout << endl;
};



int main(void){
	Titulos(2, "Colas");

	Cola C;
	int alumnos[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int i, hrsAleEN, minAleEN, hrsAleSA, minAleSA, tiempoUtil;
	int hrsSAL;
	char opc, nombre[20], hr[5], tiempo[5];
	srand(time(0));
	
	C.Crear();
	
	tiempoUtil = 30 + rand()%(61-30);
	
	for(i = 0; C.colaLlena() != 1; i++){
			C.Insertar(alumnos[i]);
	};
	
	cout << "Computadoras Disponibles: " << endl;
	C.Imprimir();
	cout << endl << endl;
	
	
	do{
		
		cout <<"Registro" << endl;
		cout << "Usuario: " << endl; cin >> nombre;
		//system("cls");
		cout << "Nuevo alumno (s/n): "; opc = getche();
		cout << endl << endl;
		
		//Hora de llegada
		hrsAleEN = 10 + rand()%(20 - 10);
		minAleEN = 0 + rand()%(60 - 0);
		  	
		//Hora de salida
		hrsSAL= tiempoUtil + minAleEN;
		
		cout << endl << "************" << endl;
		
		C.Quitar(); C.Imprimir();	
		cout << endl << "************" << endl;
		
		if(C.colaVacia() == 1){
			cout << "Usuario: " << nombre << endl;
			
			if(minAleEN <= 9){
				cout << "Llegada (hh:mm): " << hrsAleEN << ":" << "0" << minAleEN << endl;
			}else{
				cout << "Llegada (hh:mm): " << hrsAleEN << ":" << minAleEN << endl;
			}
			
			if(hrsSAL > 59){
				hrsAleEN++;
				int minCero = 0;
				int restante = tiempoUtil - minAleEN;
				int minFal = abs(restante) + minCero;
				if(minFal < 10){
					cout << "Salida (hh:mm): " << hrsAleEN << ":" << "0" << minFal << endl;
					cout << endl << "***************" << endl;
				}
				
				if(minFal >= 10){
					cout << "Salida (hh:mm): " << hrsAleEN << ":" << minFal << endl;
					cout << endl << "***************" << endl;	
				}
			}
			
			
			
		};
		
	}while(opc == 's' || opc == 'S');
	
	return 0;
}



void Titulos(int numeroTarea, char const *tema){
	cout << "IPN/UPIICSA/CIENCIAS DE LA INFORMATICA" << endl;
    cout << "Materia: Estructuras y Representacion de Datos" << endl;
    cout << "Nombre: Edson Gustavo Arreola Gonzalez" << endl;
    cout << "Tarea no. "<< numeroTarea << endl;
    cout << "Tema: " << tema << endl << endl; 
};



