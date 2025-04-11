/* Peça ao usuário para informar 3 notas e seus respectivos pesos. Calcule a
média ponderada das notas e exiba o resultado. */

#include <iostream>
#include <iomanip>
using namespace std;
float nota1,nota2,nota3,peso1,peso2,peso3,media;
main()
{
	system("chcp 65001"); //Para acentuar as palavras
	system("cls"); // Limpar a tela
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\n\t Programa Média Ponderada";
	cout<<"\n\t ============================";
	cout<<"\n\n\n Nota 1:  ";
	cin>>nota1;
	cout<<"\nPeso nota 1:  ";
	cin>>peso1;
	cout<<"\nNota 2: ";
	cin>>nota2;
	cout<<"\nPeso nota 2: ";
	cin>>peso2;
	cout<<"\nNota 3: ";
	cin>>nota3;
	cout<<"\nPeso nota 3: ";
	cin>>peso3;
	media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3))/(peso1 + peso2 + peso3);
	cout<<"\nResultado: "<<media;
	cout<<"\n\n\n";
}
