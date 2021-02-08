/*
algoritmo "Lista_04_exer_03"
 Função:Fazer um programa para receber três notas e seus respectivos pesos
// de um aluno, calcular e escrever a média ponderada das notas e a mensagem de
// "aprovado" para média maior ou igual a 6,0 ou a mensagem de "reprovado" para
// média menor que 6,0.
// Autor :  Caio
// Data : 09/10/2014
*/

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

	int main ()

{
	char nomeAluno[20], aviso[20];
	float nota1, nota2, nota3, mediaPonderada;
	int peso1, peso2, peso3;

		cout<<"Informe o Nome do Aluno ";
		cin>>nomeAluno;

			cout<<"Informe a Nota da Primeira Prova";
			cin>>nota1;
				cout<<"Informe o Peso da Primeira Prova";
				cin>>peso1;

			cout<<"Informe a Nota da Segunda Prova";
			cin>>nota2;
				cout<<"Informe o Peso da Segunda Prova";
				cin>>peso2;
			cout<<"Informe a Nota da Terceira Prova";
			cin>>nota3;
				cout<<"Informe o Peso da Terceira Prova";
				cin>>peso3;

		mediaPonderada = ((nota1 * peso1)+(nota2*peso2)+(nota3*peso3))/(peso1+peso2+peso3);
			if (mediaPonderada >= 6.0) {
		
				cout<<"Aprovado";
				cin>>aviso;
			}
			else {
				cout<<"Reprovado";
 				cin>>aviso;
			}

			getch ();
}