/*  Solicite ao usuário um valor principal, a taxa de juros anual e o tempo em anos. 
Calcule o valor dos juros simples e o valor total após o tempo estipulado.
Fórmula de Juros Simples: Juros = Principal × Taxa × Tempo
Valor Total = Principal + Juros
*/
#include <iostream> //biblioteca C++
using namespace std;
float principal,taxa,tempo,juros,total;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\n\n\t Programa Cálculo Juros Simples ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\nValor principal: ";
	cin>>principal;
	cout<<"Taxa de Juros: ";
	cin>>taxa;
	cout<<"Tempo em anos: ";
	cin>>tempo;
	juros = principal * taxa * tempo;
	total = principal + juros;
	cout<<"Juros simples: "<<juros;
	cout<<"%";
	cout<<"\nValor total: R$ "<<total;
	cout<<"\n\n\n\n";			
}