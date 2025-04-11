/* Programa para calcular o meu salário dos sonhos
*/
#include <iostream>
#include <iomanip>
using namespace std;
// Quais entradas de valores?
float salario,valorhora,qtdhoratrab;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\n\t Programa Salário dos Sonhos ";
	cout<<"\n\t ==========================";
	cout<<"\n\n\n Qual o valor da sua hora trabalhada?  ";
	cin>>valorhora;
	cout<<"\n Quantas horas você trabalhou?  ";
	cin>>qtdhoratrab;
	salario = valorhora*qtdhoratrab;
	cout<<"\n Salário dos Sonhos: "<<salario;
}