/*algoritmo "Cercar terreno"
// Fun��o :  Calculo de custos para cercar terreno
// Autor :   Caio
// Data : 17/08/2014
// Se��o de Declara��es 
var

    ladodoterreno,ladodoterreno1:real  // entrada
    custodomourao:real    // entrada
    precoemmetrosdearamefarpado:real
    quantidadedemouroes:real
    custototal:real
    custoemarame:real
    custoemmouroes:real
    
inicio
// Se��o de Comandos 

        ESCREVA("Informe a medida de um lado do terreno         ")
        LEIA(ladodoterreno)
        ESCREVAl("Informe a medida do lado adjacente ao que voc� informou")
        ESCREVAl("anteriormente       ")
        LEIA(ladodoterreno1)
        ESCREVA("Informe o custo de um mour�o        ")
        LEIA(custodomourao)
        ESCREVA("Informe o custo de um metro de arame farpado       ")
        LEIA(precoemmetrosdearamefarpado)
        quantidadedemouroes := (((ladodoterreno/3)+1)*2) + ((((ladodoterreno1/3)+1)-2)*2)
        custoemarame := (((ladodoterreno+ladodoterreno1)*2)*4)* precoemmetrosdearamefarpado
        custoemmouroes := quantidadedemouroes * custodomourao
        custototal := custoemarame + custoemmouroes
        ESCREVAl("O numero de mouroes utilizado para cercar esse terreno ser�")
        ESCREVAl("de ",quantidadedemouroes:5:2," mour�es")
        ESCREVAl("O gasto total para a constru��o dessa cerca ser� de R$ ", custototal)
        ESCREVAl("Sendo R$ ",custoemmouroes," em mour�es e R$ ",custoemarame," em arame farpado")
        
fimalgoritmo

*/
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
	int main ()
	
{		
	float ladodoterreno,ladodoterreno1, custodomourao, precoemmetrosdearamefarpado, quantidadedemouroes; 
	float custototal, custoemarame, custoemmouroes;
		
		cout<<"Informe a medida de um lado do terreno ";
		cin>>ladodoterreno;
			cout<<"Informe a medida do lado adjacente ao que voc� informou anterior ";
			cin>>ladodoterreno1;
				cout<<"Informe o custo de um mour�o ";
				cin>>custodomourao;
					cout<<"Informe o custo de um metro de arame farpado ";
					cin>>precoemmetrosdearamefarpado;
					
		quantidadedemouroes = (((ladodoterreno/3)+1)*2) + ((((ladodoterreno1/3)+1)-2)*2);
        	custoemarame = (((ladodoterreno+ladodoterreno1)*2)*4)* precoemmetrosdearamefarpado;
        	custoemmouroes = quantidadedemouroes * custodomourao;
        	custototal = custoemarame + custoemmouroes;
		
		cout<<"O numero de mouroes utilizado para cercar esse terreno ser� \nde"<<quantidadedemouroes<<" mouroes";
		cout<<"O gasto total para a constru��o dessa cerca ser� de R$ "<<custototal;
		cout<<"Sendo R$ "<<custoemmouroes<<" em mour�es e R$ "<<custoemarame<<" em arame farpado";
		getch ();
		
		
	
}
