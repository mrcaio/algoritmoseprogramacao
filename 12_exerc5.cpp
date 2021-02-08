#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main ()

{
   		int numerototal, numeropago;
   		float valordaparcela, devendoparcela1, devendoparcela2;

   			cout<<"Informe o Número Total de Parcelas do Consórcio";
   			cin>>numerototal;
   			cout<<"Informe o Número de Parcelas Pagas ";
   			cin>>numeropago;
   			cout<<"Informe o Valor Atual da Prestação ";
   			cin>>valordaparcela;

   				devendoparcela1 = numerototal*valordaparcela;
   				devendoparcela2 = devendoparcela1 - numeropago * valordaparcela;

   					cout<<"Você ainda resta pagar R$"<<devendoparcela2;
   					getch ();
   }