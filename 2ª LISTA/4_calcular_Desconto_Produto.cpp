/*   Peça ao usuário o valor de um produto e o percentual de desconto. Calcule o 
valor final com o desconto aplicado e exiba o valor do desconto e o preço final.
• Fórmula: Desconto = Preço × (Percentual / 100)
• Preço Final = Preço - Desconto
*/
#include <iostream> //biblioteca C++
using namespace std;
float desconto,preco,final;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\n\n\t Programa Desconto em Produto ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\nPreço: ";
	cin>>preco;
	cout<<"\nDesconto: ";
	cin>>desconto;
	desconto = preco * (desconto / 100); //formula desconto
	final = preco - desconto;
	cout<<"\n\nPreço Final: "<<final;
	cout<<"\n\n\n\n";			
}