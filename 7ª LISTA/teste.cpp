#include <iostream>
#include "DiegoSilveira.h"
using namespace std;

main(){
	system("chcp 65001");//Para acenturar as palavras
	system("cls");
	cout<<"\n\n\t FATORIAL DE UM NÚMERO \n\n\n";
	cin >> int num1;
	cin >> int num2;
	cout << verificarNumMaior(num1, num2)
	/*cout<<"\n Digite "<<TAM<<" números \n\n\n";
	for(i=0; i<TAM; i++){
		cout<<"\n Digite o "<<i+1<<"º ";
		cin>>vetor[i];
		if (i==0){
			maior = vetor[i];
			menor = vetor[i];	
		}
		if (vetor[i] > maior)
			maior = vetor[i];
		if (vetor[i] < menor)
			menor = vetor[i];
	}*/
	}

// Função para Calcular o Fatorial de um n° inteiro
/*int calcularFatorial(int num)
{
	return num * (num - 1);
}*/