/* Faça um programa que receba um número inteiro e imprima se 
ele está no intervalo de -10 a 10. Caso contrário, 
imprima "fora do intervalo".
*/
#include <iostream> //biblioteca C++
#include <iomanip>
using namespace std;
int num;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<fixed<<setprecision(0);
	cout<<"\n\n\n\t Programa Analisando Números ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\n Digite o número: ";
	cin>>num;
		if (num >= -10 && num <= 10 )
			cout<<"\n Está no intervalo";
		else
			cout<<"\n Não está no intervalo";
		cout<<"\n\n\n\n";			
}