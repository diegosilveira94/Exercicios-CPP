/* Faça um programa que receba três lados de um triângulo e determine se o triângulo é
equilátero, isósceles ou escaleno. */

#include <iostream>
#include <iomanip>
using namespace std;
float lado1,lado2,lado3;
main()
{
	system("chcp 65001"); //Para acentuar as palavras
	system("cls"); // Limpar a tela
	cout<<fixed<<setprecision(0);
	cout<<"\n\n\n\t Programa Tipo de Triângulo";
	cout<<"\n\t ==========================";
	cout<<"\n\n\nLado 1:  ";
	cin>>lado1;
	cout<<"\n\n\nLado 2:  ";
	cin>>lado2;
	cout<<"\n\n\nLado 3:  ";
	cin>>lado3;
		if (lado1 == lado2 && lado2 == lado3) {
			cout<<"\nO triângulo é Equilátero";
		}
		else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
			cout<<"\nO triângulo é Isósceles";
		}
		else
			cout<<"O triângulo é Escaleno";
	cout<<"\n\n\n";
}