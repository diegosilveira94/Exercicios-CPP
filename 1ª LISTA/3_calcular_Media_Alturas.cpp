/*Criar um programa que leia três alturas de um aluno e calcule a média aritmética dessas alturas.
*/

#include <iostream>
#include <iomanip>
using namespace std;
// Quais entradas de valores?
float altura1,altura2,altura3,media;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\n\t Programa Média das Alturas ";
	cout<<"\n\t ==========================";
	cout<<"\n\n\n Altura 1: ";
	cin>>altura1;
	cout<<"\n Altura 2: ";
	cin>>altura2;
	cout<<"\n Altura 3: ";
	cin>>altura3;
	media = (altura1 + altura2 + altura3)/3;
	cout<<"\n Média: "<<media;
	cout<<" (aproximadamente)";
}