/*  FUP altere o programa anterior para imprimir:
 A quantidade de números negativos
 A quantidade de pares
 A quantidade de números múltiplos de 7
*/
#include <iostream>
#include <iomanip>
using namespace std;
int numero,i,cont_Neg=0,cont_Pares=0,qtd_Num,cont_Mult7=0;
main(){
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\t ===================================";
	cout<<"\n\t\t PROGRAMA PARES/NEGATIVOS/MÚLTIPLOS DE 7";
	cout<<"\n\t ===================================\n";
	cout<<"\n\nQuantos números quer digitar:  ";
	cin>>qtd_Num;
	for (i = 1; i <=qtd_Num ; i++){
		cout<<"\n\nDigite o "<<i<<" número: ";
		cin>>numero;
			if (numero % 2 == 0){
				cont_Pares++;
				}
			else if (numero < 0){
				cont_Neg++;
				}
			else if (numero % 7 == 0){
				cont_Mult7++;
			}
	}
	cout<<"\n\n Foram encontrados "<<cont_Neg<<" números negativos.";
	cout<<"\n\n Foram encontrados "<<cont_Pares<<" números pares.";
	cout<<"\n\n Foram encontrados "<<cont_Mult7<<" números múltiplos de 7.";		
	cout<<"\n\n\n\n";
}