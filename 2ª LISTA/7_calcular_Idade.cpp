/* Solicite ao usuário a data de nascimento (dia, mês e ano) e a data atual (dia,
mês e ano). Calcule e exiba a idade da pessoa em anos completos. */

#include <iostream>
#include <iomanip>
using namespace std;
int diaNasc,mesNasc,anoNasc,diaAtual,mesAtual,anoAtual,idade;
main()
{
	system("chcp 65001"); //Para acentuar as palavras
	system("cls"); // Limpar a tela
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\n\t Programa Calcular Idade";
	cout<<"\n\t ============================";
	cout<<"\n\n\n Dia Atual:  ";
	cin>>diaAtual;
	cout<<"\nMês Atual:  ";
	cin>>mesAtual;
	cout<<"\nAno Atual: ";
	cin>>anoAtual;
	cout<<"\nDia de Nascimento: ";
	cin>>diaNasc;
	cout<<"\nMês de Nascimento: ";
	cin>>mesNasc;
	cout<<"\nAno de Nascimento: ";
	cin>>anoNasc;
	idade = anoAtual - anoNasc;
		if (mesAtual < mesNasc || (mesAtual == mesNasc && diaAtual < diaNasc)) {
			idade = idade - 1;
		}
	cout<<"\nIdade: "<<idade << " anos";
	cout<<"\n\n\n";
}
