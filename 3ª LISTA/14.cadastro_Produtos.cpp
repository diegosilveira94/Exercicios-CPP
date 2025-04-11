/* Crie um programa que, dada a categoria de um produto (1 – Eletrônicos, 2 – Alimentos,
3 – Roupas), informe o preço base de venda. O preço base será:
a. Eletrônicos: R$ 1.000
b. Alimentos: R$ 50
c. Roupas: R$ 100
Em seguida, o programa deve aplicar um imposto específico sobre o
preço base, dependendo da categoria:
d. Eletrônicos: 15%
e. Alimentos: 5%
f. Roupas: 10%
*/
#include <iostream>
#include <iomanip> //biblioteca C++
using namespace std;
float precob_E=1000.00,precob_A=50.00,precob_R=100.00,imp_E=15,imp_A=5,imp_R=10;
char opcao;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\n\t Programa Cadastro de Produtos ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\n[E] - Eletrônicos\n[A] - Alimentos\n[R] - Roupas\n\nEscolha uma opção --> ";
	cin>>opcao;
	opcao = toupper(opcao);
		switch(opcao){
			case 'E': {
				cout<<"\nPreço Base de Eletrônicos: R$ "<<precob_E;
				cout<<"\nValor final + impostos: R$ "<<precob_E + (precob_E/100 * imp_E);	
				break;}
			case 'A': {
				cout<<"\nPreço Base de Alimentos: R$ "<<precob_A;
				cout<<"\nValor final + impostos: R$ "<<precob_A + (precob_A/100 * imp_A);	
				break;}
			case 'R': {
				cout<<"\nPreço Base de Roupas: R$ "<<precob_R;
				cout<<"\nValor final + impostos: R$ "<<precob_R + (precob_R/100 * imp_R);	
				break;}				
			default: // Caso digite outra coisa
				cout<<"Você não escolheu a opção correta\n\n\n\n";
	}
		cout<<"\n\n\n\n";			
}