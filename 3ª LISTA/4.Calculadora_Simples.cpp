/* Escreva um programa que receba dois números inteiros e um operador (soma,
subtração, multiplicação ou divisão) e imprima o resultado da operação. Use if ou
switch para escolher a operação.
*/
#include <iostream> //biblioteca C++
#include <iomanip>
using namespace std;
float n1,n2,resultado;
int operador;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\n\n\t Calculadora Simples ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\n[1]-Soma(+)\n[2]-Subtração(-)\n[3]-Divisão(/)\n[4]-Multiplicação\nEscolha uma opção --> ";
	cin>>operador;
		switch(operador)
		{
			case 1: {// soma
				cout<<"\nNúmero 1: ";
				cin>>n1;
				cout<<"\nNúmero 2: ";
				cin>>n2;
				resultado = n1 + n2;
				cout<<"\nResultado: " <<resultado;
				break;}
			case 2: {// subtração
				cout<<"\nNúmero 1: ";
				cin>>n1;
				cout<<"\nNúmero 2: ";
				cin>>n2;
				resultado = n1 - n2;
				cout<<"\nResultado: " <<resultado;
				break;}
			case 3: {// divisão
				cout<<"\nNúmero 1: ";
				cin>>n1;
				cout<<"\nNúmero 2: ";
				cin>>n2;
				resultado = n1 / n2;
				cout<<"\nResultado: " <<resultado;
				break;}
			case 4: {// multiplicação
				cout<<"\nNúmero 1: ";
				cin>>n1;
				cout<<"\nNúmero 2: ";
				cin>>n2;
				resultado = n1 * n2;
				cout<<"\nResultado: " <<resultado;
				break;}
			default: // Caso digite outra coisa
				cout<<"Você não escolheu a opção correta\n\n\n\n";
	}
		cout<<"\n\n\n\n";			
}