/*
3. Contabilizar votos
   A   B  C   D
1 194 48 206 45
2 180 20 320 16
3 221 90 140 20
4 820 61 946 18

A) IMPRIMIR LA TABLA ANTERIOR CON LOS SUBTITULOS:

           CANDIDATOS
DISTRITO

B) CALCULAR E IMPRIMIR EL NUMERO TOTAL DE VOTOS RECIBIDOS POR CADA CADIDATO
Y EL PORCENTAJE DE CADA UNO DE ELLOS


C) INDICAR QUE CANDIDATO GANO (MAS DE 50% ES EL GANADOR)
IMPRIMIR LOS CANDIDATOS MÁS VOTADOS
*/

#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#define distrito 4
#define candidato 4
using namespace std;
void Titulos(int numeroTarea, char const *tema);


int main(void){
	
	Titulos(3, "Arreglos");
	
	int i, j;
	float totalA, totalB, totalC, totalD, totalVotos;
	float porA, porB, porC, porD;
	int votos[distrito][candidato] = {
	{194, 48, 206, 45},
	{180, 20, 320, 16},
	{221, 90, 140, 20},
	{820, 61, 946, 18},
	};
	
	
	cout << "                    Elecciones 2021                          " << endl << endl;
	cout << "***************************************************" << endl;
	cout << "                " << "Candidatos" << endl;
	cout << "            " << " A " << "  B " << "   C " << "  D" << endl;
	cout <<" ___" << "__" << "___" << "__" << " ___" << "  __" << "  ___" << "  __"<< endl;
	for(i = 0; i < distrito; i++){
		cout << "|";
		cout << "Distrito "  << i;
		for(j = 0; j < candidato; j++){
			cout << "|";
			cout << votos[i][j] << "|";
		};
		cout << endl;
	}
	cout << endl <<"***************************************************" << endl;
	

	totalA = votos[0][0] + votos[1][0] + votos[2][0] + votos[3][0];
	cout << "Total de votos del candidato A: " << totalA << endl;
	
	totalB = votos[0][1] + votos[1][1] + votos[2][1] + votos[3][1];
	cout << "Total de votos del candidato B: " << totalB << endl;
	
	totalC = votos[0][2] + votos[1][2] + votos[2][2] + votos[3][2];
	cout << "Total de votos del candidato C: " << totalC << endl;
	
	totalD = votos[0][3] + votos[1][3] + votos[2][3] + votos[3][3];
	cout << "Total de votos del candidato D: " << totalD << endl;
	
	totalVotos = totalA + totalB + totalC + totalD;
	cout << "Votos totales: " << totalVotos << endl;
	cout << endl <<"***************************************************" << endl;


	porA = (totalA * 100) / totalVotos;
	cout << "Porcentaje de votos del candidato A: " << fixed << setprecision(2) << porA << "%" << endl;
	
	porB = (totalB * 100) / totalVotos;
	cout << "Porcentaje de votos del candidato B: " << fixed << setprecision(2) << porB << "%" << endl;
	
	porC = (totalC * 100) / totalVotos;
	cout << "Porcentaje de votos del candidato C: " << fixed << setprecision(2) << porC << "%" << endl;
	
	porD = (totalD * 100) / totalVotos;
	cout << "Porcentaje de votos del candidato D: " << fixed << setprecision(2) << porD << "%" << endl;
	cout << endl <<"***************************************************" << endl;
	
	
	cout << "***** FELICIDADES *****" << endl;
	if(porA > porB && porA > porC && porA > porD){
		cout << "El gandor de las elecciones es A con un: " << porA << "%" << endl;
	}
	else if(porB > porA && porB > porC && porB > porD){
		cout << "El gandor de las elecciones es B con un: " << porB << "%" << endl;
	}
	else if(porC > porA && porC > porB && porC > porD){
		cout << "El gandor de las elecciones es C con un: " << porC << "%" << endl;
	}
	else{
		cout << "El gandor de las elecciones es D con un: " << porD << "%" << endl;
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





