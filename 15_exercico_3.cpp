/*
// Fun��o : a partir dos seguintes dados: comprimento e altura de um tijolo
//(em cent�metros); comprimento e altura de uma parede (em metros);
//custo do milheiro de tijolos, calcular:
//          a)	o n�mero de tijolos necess�rios para construir a parede;
//          b)	o custo de constru��o da parede, referente aos tijolos gastos.
//          Sabe-se que 10% da �rea da parede � de argamassa.
Autor: Caio
*/
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
      int main () 
{     
      float compriti, altuti, areati;
      float compripa, altupa, areapa;
      float customilti, custoconstru, numerotij;
      
            cout<<"Informe o comprimento do Tijolo em cm ";
            cin>>compriti;
                  cout<<"Informe a altura do Tijolo em cm ";
                  cin>>altuti;
                        cout<<"Informe o comprimento da Parede em mts ";
                        cin>>compripa;
                              cout<<"Informe a altura da Parede em mts ";
                              cin>>altupa;
                                    cout<<"Informe o Custo do Milheiro de Tijolos ";
                                    cin>>customilti;
            
            areati = compriti * altuti * 0.0001;
            areapa = compripa * altupa;
            numerotij = areapa * 0.9 / areati;
            custoconstru = numerotij * customilti / 1000;
            
            cout<<"O n�mero de Tijolos necess�rios ser� "<<numerotij;
            cout<<"O custo ser� de R$ "<<custoconstru;
            
            getch ();
            }
