/* Receba um número e imprima se ele é positivo, negativo ou zero.
*/
#include <iostream> //biblioteca C++
using namespace std;
float num;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\n\n\t Classificação dos Números ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\n Digite o número: ";
	cin>>num;
		if (num < 0)
			cout<<" O número é negativo";
		else if (num == 0)
			cout<<" O número é zero";
		else
			cout<<" O número é positivo";	
		cout<<"\n\n\n\n";			
}