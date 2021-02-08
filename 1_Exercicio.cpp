#include <iostream>
#include <string.h>
#include <iomanip>
#include<conio.h>
using namespace std; 

int main ()
{


	float valores[20];
	float media;
	int num; 
	for (num=0;num<20;num++)
{
	cout<<"Digite o valor"<<(num+1)<<" do numero ";
	cin>>valores[num];
	media += valores[num];
}
	media = media / 20;
	cout<<"\nRelacao das notas maiores a media dos valores "<<media<<endl;
	for (num=0; num<20; num++)
	if (valores[num]>media)
	cout<<valores[num]<<endl;

	getch ();
}

	
