/* Crie um programa que leia duas notas de um aluno, sendo que a primeira tem peso 3 e
a segunda tem peso 7. O programa deve calcular a média ponderada
*/
#include <iostream>
#include <iomanip>
using namespace std;
// Quais entradas de valores?
float kg,gramas;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	cout<<fixed<<setprecision(0);
	cout<<"\n\n\n\t Programa KG para Gramas";
	cout<<"\n\t ==========================";
	cout<<"\n\n\n Quilogramas: ";
	cin>>kg;
	gramas = kg * 1000;
	cout<<"\n Gramas: "<<gramas;
}