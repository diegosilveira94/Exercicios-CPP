/* Faça um programa que, dado o número de um mês (1 a 12), 
determine quantos dias esse mês tem (considerando que fevereiro
 tem 28 dias, não levando em conta ano bissexto).
*/
#include <iostream> //biblioteca C++
using namespace std;
int mes;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\n\n\t Programa Dias no Mês ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\n Escolha o número do mês (1 a 12) --> ";
	cin>>mes;
		if (mes==4 || mes==6 || mes==9 || mes==11)
			cout<<" \n O mês selecionado tem 30 dias";
		else if (mes==1 || mes==3 || mes==5 || mes==7 || mes==10 || mes==12)
			cout<<" \n O mês selecionado tem 31 dias";
		else
			cout<<" \n O mês selecionado tem 28
			 dias";	
		cout<<"\n\n\n\n";			
}