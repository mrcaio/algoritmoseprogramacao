#include <conio.h>
#include <iomanip>
#include <iostream>
#include <string.h>
using namespace std;
	int main ()
	{
		int codigosocio, quantidep;
		char tipoassociado;
		float valormensa, valortotal;
		
		cout<<"Informe o Código do Associado ";
		cin>>codigosocio;
		
	    while (codigosocio !=0)
		{
		
			cout<<"Informe o tipo do associado P-Patrimonial C-Contribuiente T-Temporário ";
			cin>>tipoassociado;
				cout<<"Informe o Valor da Mensalidade ";
				cin>>valormensa;
					cout<<"Informe a Quantidade de Dependentes ";
					cin>>quantidep;
					
					if (tipoassociado='P')
					{
					valortotal = (quantidep * 10) + valormensa;
					cout<<"O associado "<<codigosocio<<" com o tipo de associado "<<tipoassociado<<" \nTem o valor total da mensalidade em "<<valortotal;
				    }
					else
						if (tipoassociado='C')
						 {
						 valortotal = (quantidep * 15) + valormensa;
						 cout<<"O associado "<<codigosocio<<" com o tipo de associado "<<tipoassociado<<" \nTem o valor total da mensalidade em "<<valortotal;
					}
						 else
						 {
						 valortotal = (quantidep * 20) + valormensa;
						 cout<<"O associado "<<codigosocio<<" com o tipo de associado "<<tipoassociado<<" \nTem o valor total da mensalidade em "<<valortotal;
					}
						 
						 getch ();
					
}
	}
