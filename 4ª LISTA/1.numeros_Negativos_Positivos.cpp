/*  Faça um programa que conte quantos 
numeros pares tem de 1 a 1783.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int numero,i,negativo=0,positivo=0,qtd_Num;
main(){
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\t ===================================";
	cout<<"\n\t\t PROGRAMA PARES ";
	cout<<"\n\t ===================================\n";
	cout<<"\n Quantos números quer digitar:  ";
	cin>>qtd_Num;
	for (i = 1; i <=qtd_Num ; i++){
		cout<<"Digite o "<<i<<" número: ";
		cin>>numero;
			if (numero >= 0){
				positivo++;
				}
			else if(numero < 0){
				negativo++;
				} 
	}
	cout<<"\n\n Foram encontrados "<<positivo<<" números positivos.";
	cout<<"\n\n Foram encontrados "<<negativo<<" números negativos.";
//		cout<< i <<"  ";
//		contPos++;}
//		if (i < 0){
//			cout<< i <<" ";
//			contNeg++;}}
	cout<<"\n\n\n\n";
}