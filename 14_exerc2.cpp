/*
algoritmo "Calculo de quantidade de barbante para amarrar pacote"
// Fun��o : Calcular a quantidade de barbante
// Autor : Caio
// Data : 15/08/2014
// Se��o de Declara��es 
var
   largurapacote: real // entrada
   alturapacote: real // entrada
   comprimentopacote: real // entrada
   quantidadebarbante: real // saida
inicio
// Se��o de Comandos 
   escreva ("Informe a largura do pacote em cm ")
   leia (largurapacote)
   escreva ("Informe a altura do pacote em cm ")
   leia (alturapacote)
   escreva ("Informe o comprimento do pacote em cm ")
   leia (comprimentopacote)
   quantidadebarbante := (largurapacote+alturapacote *4) + (alturapacote+comprimentopacote *4) * 4
   escreval ("A quantidade de barbante ser� em cm ", quantidadebarbante)
fimalgoritmo
*/
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
	int main ()

{
	float largurapacote, alturapacote, comprimentopacote;
	float quantidadebarbante;
	
		cout<<"Informe a largura do pacote em cm ";
		cin>>largurapacote;
			cout<<"Informe a altura do pacote em cm ";
			cin>>alturapacote;
				cout<<"Informe o comprimento do pacote em cm";
				cin>>comprimentopacote;
				
		quantidadebarbante = 4*(((largurapacote+alturapacote)*2) + ((comprimentopacote+alturapacote)*2));
		
	cout<<"A quantidade de barbante sera em cm"<<quantidadebarbante;
	getch ();
	
		
}
