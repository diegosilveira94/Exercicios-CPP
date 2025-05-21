/* 16. Cálculo de Férias
Escreva um programa que calcule o valor de férias de um empregado, levando
em consideração o salário e o tempo de serviço:
a. Se o empregado tem menos de 1 ano de serviço, ele recebe 1/3 do salário
como bônus de férias.
b. Se o empregado tem de 1 a 5 anos de serviço, ele recebe 1/2 do salário
como bônus.
c. Se o empregado tem mais de 5 anos de serviço, ele recebe o salário
inteiro como bônus de férias.
*/
#include <iostream>
#include <iomanip> //biblioteca C++
using namespace std;
float salario;
char op;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\n\t Programa Cálculo de Férias ";
	cout<<"\n\t ===================================";
	cout<<"\n\nSalário do colaborador: ";
	cin>>salario;
    cout<<"\n\n\n[A] - Menos de 1 ano de serviço\n[B] - De 1 a 5 anos de serviço\n[C] - Mais de 5 anos de serviço\n\nEscolha uma opção --> ";
	cin>>op;
    op = toupper(op);	
		switch(op){
			case 'A': {
				cout<<"\nValor a ser pago: R$"<<salario * 0.33<<" de bônus de férias";
				break;}
			case 'B': {
				cout<<"\nValor a ser pago: R$"<<salario * 0.5<<" de bônus de férias";
				break;}
			case 'C': {
				cout<<"\nValor a ser pago: R$"<<salario<<" de bônus de férias";
				break;}			
			default: // Caso digite outra coisa
				cout<<"Você não escolheu uma das opções\n\n\n\n";
}
	
		cout<<"\n\n\n\n";			
}