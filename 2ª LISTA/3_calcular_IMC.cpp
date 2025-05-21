/*  Implemente um programa que calcule o Índice de Massa Corporal (IMC) de uma 
pessoa. Solicite o peso (em kg) e a altura (em metros), e exiba o IMC. 
o Fórmula: IMC = peso / (altura × altura)
Exiba a classificação do IMC, conforme as faixas: 
Abaixo de 18.5: Abaixo do peso
18.5 a 24.9: Peso normal
25 a 29.9: Sobrepeso
30 ou mais: Obesidade
*/
#include <iostream> //biblioteca C++
using namespace std;
float peso,altura,imc;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\n\n\t Programa Cálculo IMC ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\nPeso(kg): ";
	cin>>peso;
	cout<<"Altura(metros): ";
	cin>>altura;
	imc = peso / (altura * altura); //formula IMC
		if (imc < 18.5)
			cout<<"\nAbaixo do peso";
		else 
			if (imc >= 18.5 && imc < 24.9)
			cout<<"\nPeso normal";
			else
				if (imc >= 25 && imc < 29.9)
				cout<<"\nSobrepeso";
				else
				cout<<"\nObesidade";
	cout<<"\n\n\n\n";			
}