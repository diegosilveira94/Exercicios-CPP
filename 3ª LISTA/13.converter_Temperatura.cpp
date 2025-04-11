/* Crie um programa que converta uma temperatura dada em graus
Celsius para Fahrenheit e vice-versa. O programa deve perguntar
ao usuário qual unidade de temperatura ele deseja converter
(Celsius ou Fahrenheit) e realizar a conversão.
*/
#include <iostream>
#include <iomanip> //biblioteca C++
using namespace std;
float celsius,fahrenheit;
char opcao;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\n\n\t Programa Área e Perímetro da Forma ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\n[C]-Celsius para Fahrenheit\n[F]-Fahrenheit para Celsius\n\nEscolha uma opção --> ";
	cin>>opcao;
	opcao = toupper(opcao);
		switch(opcao){
			case 'C': {
				cout<<"\nCelsius: ";
				cin>>celsius;
				fahrenheit = (celsius * 9/5) + 32;
				cout<<"Fahrenheit: "<<fahrenheit;
				break;}
			case 'F': {
				cout<<"\nFahrenheit: ";
				cin>>fahrenheit;
				celsius = (fahrenheit - 32) * 5/9;
				cout<<"Celsius: "<<celsius;
				break;}
			default: // Caso digite outra coisa
				cout<<"Você não escolheu a opção correta\n\n\n\n";
	}
		cout<<"\n\n\n\n";			
}