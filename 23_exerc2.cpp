/*
Algoritmo Lista 04 Exercício 2 PRONTO
// Função :2.	Uma determinada empresa decide reajustar os vencimentos de seus
//funcionários, proporcionando um aumento de 20% aos que percebem até R$ 600,00
//e 10% aos que ganham acima desse valor. Construir um programa para obter o
//nome e o salário de um funcionário e calcular o valor do salário reajustado.
// Escrever o nome e o novo salário do funcionário como saída
// Autor : Caio
// Data : 07/10/2014
*/
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

	int main ()
{
	char nome;
	float salarioatual, salarionovo;

		cout<<"Informe o nome do Funcionario ";
		cin>>nome;
			cout<<"Informe o Salário Atual do funcionario ";
			cin>>salarioatual;

				if (salarioatual <= 600.00)
				
					salarionovo = salarioatual + (salarioatual * 20 / 100);
				
				else 
					salarionovo = salarioatual + (salarioatual * 10 / 100);

				cout<<"O funcionario "<<nome<<" vai receber a quantia em reais de R$ "<<salarionovo;
				cout<<"\n Se informar fim no nome encerra o programa ";

				getch ();

}
