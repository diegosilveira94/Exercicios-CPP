#include <iostream>
#include "DiegoSilveira.h"
using namespace std;
int num1, num2;
main(){
	system("chcp 65001");//Para acenturar as palavras
	system("cls");
	cout<<"\n\n\t QUAL O MAIOR NÚMERO \n\n\n";
	cout<<"Digite o 1º número: ";
	cin>>num1;
	cout<<"Digite o 2º número: ";
	cin>>num2;
	cout<<"\n\nO maior número é: "<<verificarNumMaior(num1, num2);
}