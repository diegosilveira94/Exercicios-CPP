/*Faça um programa que leia um valor em horas
 e o converta para minutos.*/

#include <iostream>
#include <iomanip>
using namespace std;
float horas,minutos;
main()
{
	system("chcp 65001"); //Para acentuar as palavras
	cout<<fixed<<setprecision(0);
	cout<<"\n\n\n\t Programa Horas para Minutos";
	cout<<"\n\t ==========================";
	cout<<"\n\n\n Horas:  ";
	cin>>horas;
	minutos = horas * 60;
	cout<<"\n Minutos:  "<<minutos;
}
