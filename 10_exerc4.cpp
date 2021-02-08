/*
algoritmo calculo kwH
// Função : Calcular o total a pagar dos kwH consumidos por uma residência
// Autor : Caio
// Data : 10/08/2014
// Seção de Declarações 
var
    consumo: real // entrada
    valorbruto: real // saida
    valordesconto: real // saida
inicio
// Seção de Comandos 
   escreva ("Informe o KWh gastos na residência ")
   leia (consumo)
   valorbruto := consumo * 0.30
   valordesconto := valorbruto - valorbruto * 0.15
   escreval ("O Valor Bruto a pagar é de R$",valorbruto," reais e o Valor com Desconto é de R$",valordesconto," reais")
fimalgoritmo
*/

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <locale.h>
using namespace std;
int main ()
{
	float consumo, valorbruto, valordesconto;
		
		cout<<"Informe o KWh gastos na residência ";
	 	cin>>consumo;
	 		
	 		valorbruto = consumo * 0.30;
	 		valordesconto = valorbruto * 0.15;

		cout<<"O valor bruto a pagar é de R$, "<<valorbruto<<" reais";
		cout<<"\nValor com Desconto é de R$"<<valordesconto<<" reais"<<endl;
getch ();		

}		