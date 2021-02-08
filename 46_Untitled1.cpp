/*
Nome: Algoritmo Biblioteca
Função: Saber a qual estante o livro vai, a partir do primeiro algarismo mais o último
Autor: Caio
Data: 14/11/2014
*/
#include <iostream>
#include <string.h>
#include<conio.h>
#include<iomanip>
using namespace std; 
int main ()
	{
		int algarismo1, algarismo2, estante;
		char nomedolivro[20];
		
		cout<<"Informe o Nome do Livro ";
		cin>>nomedolivro;
		while(strcmp(nomedolivro, "fim") != 0)
		{
		cout<<"Informe o Primeiro Algarismo do Código de Barra ";
		cin>>algarismo1;
		cout<<"Informe o Último Algarismo do Código de Barra ";
		cin>>algarismo2;
		estante = algarismo1+algarismo2;
		if (estante<=10)
		cout<<"O Livro "<<nomedolivro<<" ira na Estante A"<<endl;
		else (estante >= 11);
		cout<<"O Livro "<<nomedolivro<<" ira na Estante B"<<endl;

		cout<<"Informe o Nome do Livro ";
		cin>>nomedolivro;
		}
		getch ();
	}
		
