/* Criar um programa que leia o valor da largura e altura de um retângulo e calcule e exiba a sua área
*/
#include <iostream>
#include <iomanip>
using namespace std;
// Quais entradas de valores?
float altura,largura,area;
main() //função principal
{ //abre
	system("chcp 65001");// Para acentuar as palavras
	system("cls"); //limpar a tela
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\n\t Programa Área do Retângulo ";
	cout<<"\n\t ==========================";
	cout<<"\n\n\n Altura: ";
	cin>>altura;
	cout<<"\n Largura: ";
	cin>>largura;
	area = altura*largura;
	cout<<"\n O retângulo tem uma área total de: "<<area;
}//fecha