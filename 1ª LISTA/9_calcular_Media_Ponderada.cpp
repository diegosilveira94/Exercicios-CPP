/* Crie um programa que leia duas notas de um aluno, sendo que a primeira tem peso 3 e
a segunda tem peso 7. O programa deve calcular a média ponderada
*/
#include <iostream>
#include <iomanip>
using namespace std;
// Quais entradas de valores?
float n1,n2,media;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	cout<<fixed<<setprecision(1);
	cout<<"\n\n\n\t Programa Média Ponderada ";
	cout<<"\n\t ==========================";
	cout<<"\n\n\n Nota 1: ";
	cin>>n1;
	cout<<"\n Nota 2: ";
	cin>>n2;
	media = ((n1 * 3)+(n2 * 7))/10;
	cout<<"\n Média ponderada: "<<media;
}