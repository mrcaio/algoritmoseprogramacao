/*
algoritmo "Calcular a quantidade de chuva"
// Função : Fazer o calculo da chuva e transferir a unidade
// Autor :  Caio
// Data : 15/08/2014
// Se��o de Declara��es 
var
   chuvaemp: real // entrada
   chuvaemm: real // saida
inicio
// Se��o de Comandos 
   escreva ("Informe a quantidade de chuva em polegadas ")
   leia (chuvaemp)
   chuvaemm := chuvaemp * 25.4
   escreval ("A quantidade de chuva equivalente em milimetros � de", chuvaemm)
fimalgoritmo
*/

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()

{
	float chuvaemp;
	float chuvaemm;
	
	cout<<"Informe a quantidade de chuva em polegadas ";
	cin>>chuvaemp;
	chuvaemm = chuvaemp * 25.4;
	cout<<"A quantidade de chuva equivalente em milimetros e de "<<chuvaemm;
	getch ();
	
}
