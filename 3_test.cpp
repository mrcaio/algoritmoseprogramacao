/*
Nome: Rendimento da Aplicação
Função: Calcular o rendimento de aplicação em Banco
Autor: Caio Baader
*/
#include <conio.h>
#include <iomanip>
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	char nome[20], tipodaconta;
	float valorinvestido, valorrendimento;

	cout<<"Informe o Nome do Cliente (fim para sair)";
	cin>>nome;
		
		while (strcmp (nome, "fim") !=0)
		{
		cout<<"Informe o Tipo da Conta A, B ou C ";
		cin>>tipodaconta;
			cout<<"Informe o valor a ser investido ";
			cin>>valorinvestido;

				if (tipodaconta='A')
				{
					valorrendimento = valorinvestido * 0.57;
					cout<<"O cliente de nome "<<nome<<" que tem o tipo de conta "<<tipodaconta<<" \nInvestiu o valor de R$ "<<valorinvestido<<" e tera um rendimento de R$ "<<valorrendimento;
				}
				else
					if (tipodaconta='B')
					{
						valorrendimento = valorinvestido * 0.85;
						cout<<"O cliente de nome "<<nome<<" que tem o tipo de conta "<<tipodaconta<<" \nInvestiu o valor de R$ "<<valorinvestido<<" e tera um rendimento de R$ "<<valorrendimento;
					}
				else 
				{
					valorrendimento = valorinvestido * 1.5;
					cout<<"O cliente de nome "<<nome<<" que tem o tipo de conta "<<tipodaconta<<" \nInvestiu o valor de R$ "<<valorinvestido<<" e tera um rendimento de R$ "<<valorrendimento;
				}

				getch ();
	}
	
}