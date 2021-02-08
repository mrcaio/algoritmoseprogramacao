/*
// Função : 	Montar um programa que receba dois números distintos 
// Autor : Caio
// Data : 06/10/2014
*/
#include <conio.h>
#include <iostream>
using namespace std;
	int main ()
	
{
	float numero1, numero2;
	char resposta;
	
		cout<<"Informe o Primeiro Numero ";
		cin>>numero1;
			cout<<"Informe o Segundo Numero ";
			cin>>numero2;
		if (numero1>numero2)
			 cout<<"O numero 1 e maior que o numero 2"<<numero1;
				else
				  if (numero2>numero1)  
				  		cout<<"O numero 2 e maior que o numero 1"<<numero2;
				  	else
				  		cout<<"O numero 1 e igual ao numero 2 "<<numero1<<"-"<<numero2;
			
				  	getch ();
				  }
