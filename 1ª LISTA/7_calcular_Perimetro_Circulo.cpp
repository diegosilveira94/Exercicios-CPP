/* Criar um programa que leia o valor da largura e altura
 de um retângulo e calcule e exiba a sua área
*/
#include <iostream>
#include <iomanip>
using namespace std;
// Quais entradas de valores?
float raio,perimetro,numeropi;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	cout<<fixed<<setprecision(4);
	cout<<"\n\n\n\t Programa Perímetro do Círculo ";
	numeropi = 3.14159265358979323846;
	cout<<"\n\t ==========================";
	cout<<"\n\n\n Raio: ";
	cin>>raio;
	perimetro = 2 * numeropi * raio;
	cout<<"\n Perímetro: "<<perimetro;
	cout<<" (aproximadamente)";
}