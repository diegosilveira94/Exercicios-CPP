/* Escreva um programa que receba a idade de uma pessoa e imprima se ela é maior de
idade (18 anos ou mais) ou menor de idade (menos de 18 anos) */

#include <iostream>
#include <iomanip>
using namespace std;
int idade;
main()
{
	system("chcp 65001"); //Para acentuar as palavras
	system("cls"); // Limpar a tela
	cout<<fixed<<setprecision(1);
	cout<<"\n\n\n\t Programa Identificar Maioridade";
	cout<<"\n\t ==========================";
	cout<<"\n\n\nIdade:  ";
	cin>>idade;
		if (idade >= 18) {
			cout<<"\nÉ maior de idade";
		}
		else
			cout<<"É menor de idade";
	cout<<"\n\n\n";
}
