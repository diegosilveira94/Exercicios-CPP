/* Faça um programa que receba um número inteiro e
imprima se ele é par ou ímpar. */

#include <iostream>
#include <iomanip>
using namespace std;
int numero;
main()
{
	system("chcp 65001"); //Para acentuar as palavras
	system("cls"); // Limpar a tela
	cout<<fixed<<setprecision(0);
	cout<<"\n\n\n\t Programa Número Impar ou Par";
	cout<<"\n\t ==========================";
	cout<<"\n\n\nNúmero:  ";
	cin>>numero;
		if ((numero % 2) == 0) {
			cout<<"\nÉ par";
		}
		else
			cout<<"É ímpar";
	cout<<"\n\n\n";
}