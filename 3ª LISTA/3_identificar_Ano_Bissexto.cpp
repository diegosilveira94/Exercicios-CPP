/* Faça um programa que peça um ano.
 Verifique se o ano é bissexto ou não. */

#include <iostream>
#include <iomanip>
using namespace std;
int ano;
main()
{
	system("chcp 65001"); //Para acentuar as palavras
	system("cls"); // Limpar a tela
	cout<<fixed<<setprecision(0);
	cout<<"\n\n\n\t Programa Ano Bissexto";
	cout<<"\n\t ==========================";
	cout<<"\n\n\nAno:  ";
	cin>>ano;
		if (((ano % 4) == 0) && ((ano % 400) == 0)) {
			cout<<"\nO ano é bissexto(tem 366 dias)";
		}
		else
			cout<<"\nO ano não é bissexto(tem 365 dias)";
	cout<<"\n\n\n";
}