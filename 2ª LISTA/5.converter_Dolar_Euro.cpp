/* Peça ao usuário o valor em reais e converta para dólares e euros
Utilize taxas de câmbio oficiais: */

#include <iostream>
#include <iomanip>
using namespace std;
float cotacaoDolar,cotacaoEuro,valorDolar,valorEuro,valorReal;
main()
{
	system("chcp 65001"); //Para acentuar as palavras
	system("cls"); // Limpar a tela
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\n\t Conversor de Dólar para Euro";
	cout<<"\n\t ============================";
	cout<<"\n\n\n Cotação Atual do Dólar:  ";
	cin>>cotacaoDolar;
	cout<<"\nCotação Atual do Euro:  ";
	cin>>cotacaoEuro;
	cout<<"\nValor em Reais: ";
	cin>>valorReal;
	valorDolar = valorReal / cotacaoDolar;
	valorEuro = valorReal / cotacaoEuro;
	cout<<"\nValor em Dólares: "<<valorDolar;
	cout<<"\nValor em Euros: "<<valorEuro;
	cout<<"\n\n\n";
}
