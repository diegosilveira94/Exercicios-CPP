/* 3. FUP que peça ao usuário que digite um caractere e quantidade 
de vezes que deseja que esse caractere seja impresso na tela.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int rep=0,i;
char c;
main(){
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\t ===========================================";
	cout<<"\n\t PROGRAMA REPETIR CARACTER ";
	cout<<"\n\t ===========================================\n";
	cout<<"\n\nDigite um caracter: ";
	cin>>c;
	cout<<"\n\nDigite quantas vezes quer repetí-lo: ";
	cin>>rep;
	for (i = 1; i <=rep; i++)
		cout<< c <<" ";
	cout<<"\n\n\n\n";
}