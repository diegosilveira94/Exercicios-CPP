/* FUP que calcule a soma de todos os números ímpares que são
múltiplos de cinco e que se encontram no conjunto dos números de
1 até 1000.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int numero,i,acum_Num=0;
main(){
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\t ===========================================";
	cout<<"\n\t PROGRAMA Nº ÍMPARES MÚLTIPLOS DE 5 (1-1000) ";
	cout<<"\n\t ===========================================\n";
	cout<<"\n\nPressione enter para iniciar...";
	cin.get();
	for (i = 1; i <=1000; i++){
			if (i % 5 == 0 && i % 2 != 0){
				cout<<i<<" - ";
				acum_Num += i;
				}
	}
	cout<<"\n\n\n\nA soma de todos números ímpares e múltiplos de 5 em um intervalo de 1 a 1000 é: "<<acum_Num;		
	cout<<"\n\n\n\n";
}