/* 1. Leia um vetor com 10 idades. Calcule e imprima: a média das idades, a
quantidade de pessoas com idade superior e inferior à média calculada
*/
#include <iostream> // padrão cout e cin
#include <time.h> // uso do rand e srand

using namespace std;

int idades[10];

int main(){
    srand(time(0)); // reseta o rand com a hora atual
    system("chcp 65001");
    system("cls");
    cout << "\n\n\t =============================" << endl;
    cout << "\t  PROGRAMA MÉDIA DE 10 IDADES";
    cout << "\n\t =============================" << endl;
    cout << "Idades: ";
    for(int i = 0; i < 10; i++) {
        idades[i] = 1 + rand() % 101;
        cout << idades[i] << " - ";
    }
	cout<<"\n\n\n\n";
	
	return 0;
}