/* Escreva um programa que receba uma nota de 0 a 10 e imprima se o aluno foi aprovado, reprovado ou se precisa de recuperação:
a.
Aprovado: nota >= 7
b.
Recuperação: nota entre 4 e 6
c.
Reprovado: nota < 4
*/
#include <iostream> //biblioteca C++
using namespace std;
float nota;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\n\n\t Programa Aprovado/Reprovado ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\n Digite a nota: ";
	cin>>nota;
		if (nota >= 7)
			cout<<" \n Aprovado";
		else if (nota >= 4)
			cout<<" \n Recuperação";
		else
			cout<<" Reprovado";	
		cout<<"\n\n\n\n";			
}