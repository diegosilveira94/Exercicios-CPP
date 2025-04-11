/* Escreva um programa que receba a idade de uma pessoa 
e informe o valor do seu plano de saúde. A tabela de preços é:
a.
Até 18 anos: R$ 100
b.
De 19 a 40 anos: R$ 200
c.
De 41 a 60 anos: R$ 300
d.
Acima de 60 anos: R$ 500
*/
#include <iostream> //biblioteca C++
using namespace std;
float idade;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\n\n\t Tabela de Plano de Saúde ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\n Digite a idade: ";
	cin>>idade;
		if (idade < 18)
			cout<<"\n O valor do plano é R$ 100,00";
		else if (idade >= 18 && idade <= 40)
			cout<<"\n O valor do plano é R$ 200,00";
		else if (idade >= 41 && idade <= 60)
		cout<<"\n O valor do plano é R$ 300,00";
		else
			cout<<"\n O valor do plano é R$ 500,00";	
		cout<<"\n\n\n\n";			
}