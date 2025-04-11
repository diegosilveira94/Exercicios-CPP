#include <iostream>
#include <iomanip>
using namespace std;
float nota1,nota2,nota3,media;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\ Programa Cálculo da Média ";
	cout<<"\n Informe sua Primeira Nota: ";
	cin>>nota1;
	cout<<"\n Informe sua Segunda Nota: ";
	cin>>nota2;
	cout<<"\n Informe sua Terceira Nota: ";
	cin>>nota3;
	media = (nota1+nota2+nota3)/3;
	cout<<"\n Sua média é: "<<media;
}