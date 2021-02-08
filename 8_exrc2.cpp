#include <iostream>
#include <conio.h>
using namespace std;

int main ()

{
    float notap1, notap2, notap3;
    float mediapt;
     
    cout<<"Informe a Nota da Primeira Prova ";
    cin>>notap1;
    cout<<"Informe a Nota da Segunda Prova ";
    cin>>notap2;
    cout<<"Informe a nota da Terceira Prova ";
    cin>>notap3;
     
    mediapt = notap1*0.3 + notap2*0.4 + notap3*0.5/3;
     
    cout<<"A media do aluno sera "<<mediapt<<"media"<<endl;
    getch ();

}