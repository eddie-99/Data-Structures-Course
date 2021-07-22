/*

Elaborar un diagrama estructurado, que tenga las tres

secuencia
seleccion
repeticion

articulo con valor de mas de:
menos de $1000, no hay descuento.
$1000 10%
$2000 20%
$4000 40% descuento

desplegar el cliente, la compra y el descuento.

*/




#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void Titulos(int numeroTarea, char const *tema);

int main(void){
	Titulos(4, "Programacion Estructurada"); system("pause"); system("cls");
	
	char opc, cliente[15];
	int juguete, suma = 0, productos, i, descuento = 0;
	
	//Encabezado
	system("color 2");
	cout << "             =========================================================== " << endl;
	cout << "                             JUGUETERIA AL EL POLLO " << endl;
	cout << "                                MODULO DE VENTA " << endl;
	cout << "             =========================================================== " << endl << endl << endl << endl << endl;
	
	//Productos en venta
	cout << "                   1. BICICLETA               PRECIO: $800.00 " << endl;
	cout << "                   2. CASITA DE PRINCESA      PRECIO: $1200.00 " << endl;
	cout << "                   3. PELUCHE                 PRECIO: $400.00 " << endl;
	cout << "                   4. FIGURA DE ACCION        PRECIO: $900.00 " << endl;
	cout << "                   5. BALON                   PRECIO: $200.00 " << endl;
	cout << "                   6. MOTOCICLETA             PRECIO: $1600.00 " << endl << endl << endl << endl << endl << endl;
	
	//Comenzar la compra
	cout << "                  Desea comparar algun producto? s/n: "; opc = getche();
	if(tolower(opc) == 's'){
		system("cls");
		cout << "Nombre del cliente: "; cin >> cliente;
		system("cls");
		cout << "                                Bienvenido: " << cliente << endl << endl;
	}else{
		system("cls");
		cout << "                        GRACIAS POR VISITARNOS, VUELVA PRONTO ";
		return 0;
	};
	
	cout << "                                Cuantos productos: "; cin >> productos;
	cout << "                                Elija sus productos: " << endl << endl;
	
	cout << "                   1. BICICLETA               PRECIO: $800.00 " << endl;
	cout << "                   2. CASITA DE PRINCESA      PRECIO: $1,200.00 " << endl;
	cout << "                   3. PELUCHE                 PRECIO: $400.00 " << endl;
	cout << "                   4. FIGURA DE ACCION        PRECIO: $900.00 " << endl;
	cout << "                   5. BALON                   PRECIO: $200.00 " << endl;
	cout << "                   6. MOTOCICLETA             PRECIO: $1,600.00 " << endl << endl;
	
	for(i = 0; i < productos; i++){
		cout << "               Valor del producto: "; cin >> juguete;
		suma = suma + juguete;
		};
	
	system("cls");
	
	
	cout << "             =========================================================== " << endl;
	cout << "                             JUGUETERIA AL EL POLLO " << endl;
	cout << "                              GRACIAS POR SU COMPRA " << endl;
	cout << "             =========================================================== " << endl << endl << endl << endl << endl;
	
	
	if(suma < 1000){
		cout << "                            Cliente: " << cliente << endl;
		cout << "                            Compra: " << "$" << suma << endl;
		cout << "                            No hay descuento." << endl;
		cout << "                            Total: " << "$" << suma - descuento <<endl;
	};
	if(suma >= 1000 && suma < 2000){
		descuento = (10*suma) / 100;
		cout << "                            Cliente: " << cliente << endl;
		cout << "                            Compra: " << "$" << suma << endl;
		cout << "                            Descuento del 10%: $" << descuento << endl;
		cout << "                            Total: " << "$" << suma - descuento <<endl;
	};
	if(suma >= 2000 && suma < 4000){
		descuento = (20*suma) / 100;
		cout << "                            Cliente: " << cliente << endl;
		cout << "                            Compra: " << "$" << suma << endl;
		cout << "                            Descuento del 20%: $" << descuento << endl;
		cout << "                            Total: " << "$" << suma - descuento <<endl;
	};
	
	if(suma >= 4000){
		descuento = (40*suma) / 100;
		cout << "                            Cliente: " << cliente << endl;
		cout << "                            Compra: " << "$" << suma << endl;
		cout << "                            Descuento del 40%: $" << descuento << endl;
		cout << "                            Total: " << "$" << suma - descuento <<endl;
	};
	

	return 0;
}



void Titulos(int numeroTarea, char const *tema){
	cout << "IPN/UPIICSA/CIENCIAS DE LA INFORMATICA" << endl;
    cout << "Materia: Estructuras y Representacion de Datos" << endl;
    cout << "Nombre: Edson Gustavo Arreola Gonzalez" << endl;
    cout << "Tarea no. "<< numeroTarea << endl;
    cout << "Tema: " << tema << endl << endl; 
};
