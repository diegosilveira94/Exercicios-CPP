/* Peça ao aluno para criar um programa que leia o valor principal, a taxa de juros anual e
o tempo em anos. O programa deve calcular o valor dos juros simples usando a
fórmula:
Juros = Principal * Taxa * Tempo */

#include <iostream>
#include <iomanip>
using namespace std;
float v_juros, v_principal, taxa, tempo;
main()
{
	system("chcp 65001"); //Para acentuar as palavras
	cout<<fixed<<setprecision(1);
	cout<<"\n\n\n\t Programa Cálculo de Juros Simples";
	cout<<"\n\t ==========================";
	cout<<"\n\n\n Principal:  ";
	cin>>v_principal;
	cout<<"\n Taxa de juros:  ";
	cin>>taxa;
	cout<<"\n Tempo:  ";
	cin>>tempo;
	v_juros = v_principal * taxa * tempo;
	cout<<"\n Juros:  "<<v_juros;
}
