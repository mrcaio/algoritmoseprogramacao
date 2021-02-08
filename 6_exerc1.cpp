#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main ()

{
	int idade;
	int meses, dias;
	int horas;
	int minutos;

	cout<<"Informe sua idade em anos ";
	cin>>idade;
	meses = idade * 12;
	dias = idade * 365;
	horas = dias * 24;
	minutos = horas * 60;
	setlocale(LC_ALL, "");
	cout<<"Voce ja viveu "<<meses<<" meses, "<<dias<<" dias. ";
	cout<<"\nQue representa "<<horas<< " horas e "<<minutos<<" minutos";
	getch ();

}