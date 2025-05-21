/*Crie um programa que leia uma temperatura em Celsius e a converta para Fahrenheit
*/
// A fórmula de conversão é: Fahrenheit = (Celsius * 9/5) + 32
#include <iostream>
#include <iomanip>
#include "DiegoSilveira.h"
using namespace std;
// Quais entradas de valores?

float celsius;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	cout<<fixed<<setprecision(1);
	cout<<"\n\n\n\t Programa Celsius para Fahrenheit ";
	cout<<"\n\t ==========================";
	cout<<"\n\n\n Temperatura em Celsius: ";
	cin>>celsius;
	//fahrenheit = (celsius * 9/5) + 32;
	cout<<"\n Temperatura em Fahrenheit: "<<converterCelFah(celsius);
}


// Função para Converter Temperatura de Celsius para Fahrenheit
/*float converterCelsiusParaFarenheit(float celsius)
{
	float fahrenheit = (celsius * 9/5) + 32;
	return (fahrenheit);
}*/