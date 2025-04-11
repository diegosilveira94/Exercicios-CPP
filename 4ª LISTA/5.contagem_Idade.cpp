/* 5. FUP que leia a idade de 15 pessoas. Após calcule e imprima:
a. A menor idade do grupo;
b. A maior maior do grupo;
*/
#include <iostream>
#include <iomanip>
using namespace std;
int numero,idade,i,acum_Num=0;
main(){
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\t ===========================================";
	cout<<"\n\t PROGRAMA IDADE 15 PESSOAS ";
	cout<<"\n\t ===========================================\n";
	for (i = 1; i <=15; i++){
		cout<<"Digite a "<<i<<"ª idade: ";
		cin>>idade;
	}
	cout<<"\n\n\n\n";
}