/* Crie um programa que receba o salário de uma pessoa e 
calcule o valor do imposto a ser pago de acordo com a seguinte tabela:
e.
Até R$ 2.000: isento de imposto
f.
De R$ 2.001 a R$ 5.000: 10% de imposto
g.
Acima de R$ 5.000: 20% de imposto
*/
#include <iostream> //biblioteca C++
#include <iomanip>
using namespace std;
float salario;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\n\t Programa para Calcular Imposto ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\n Informe seu salário: ";
	cin>>salario;
		if (salario <= 2000)
			cout<<"\n Isento de imposto";
		else if (salario >= 2001 && salario <= 5000)
			cout<<"\n O imposto a ser pago é de R$ "<<salario*0.1<<" (10%)";
		else
			cout<<"\n O imposto a ser pago é de R$ "<<salario*0.2<<" (20%)";	
		cout<<"\n\n\n\n";			
}