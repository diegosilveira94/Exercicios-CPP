/* Crie um programa que leia o preço de um produto
e calcule o valor final após aplicar um desconto de 15% */

#include <iostream>
using namespace std;
float preco,com_desconto;
main()
{
	system("chcp 65001"); //Para acentuar as palavras
	system("cls"); // Limpar a tela
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\n\t Programa Desconto de 15%";
	cout<<"\n\t ==========================";
	cout<<"\n\n\n Preço original:  ";
	cin>>preco;
	com_desconto = preco * 0.85;
	cout<<"\n Preço com desconto:  "<<com_desconto;
}
