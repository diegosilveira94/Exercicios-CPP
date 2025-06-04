/* 1. Leia um vetor com 10 idades. Calcule e imprima: a média das idades, a
quantidade de pessoas com idade superior e inferior à média calculada
*/
#include <iostream> // padrão cout e cin
#include <time.h> // uso do rand e srand
#include <limits.h> // int max e min

using namespace std;

int idades[10], soma, media_idades, maior_idade=0, menor_idade=0;

int main(){
    srand(time(0)); // reseta o rand com a hora atual
    system("chcp 65001");
    system("cls");
    cout << "\n\n\t =============================" << endl;
    cout << "\t  PROGRAMA MÉDIA DE 10 IDADES";
    cout << "\n\t =============================" << endl;
    cout << "\n\n Idades: ";
    maior_idade = INT_MIN;
    menor_idade = INT_MAX;
    for(int i = 0; i < 10; i++) {
        idades[i] = 1 + rand() % 101;
        cout << idades[i];
        i < 9 ? (cout << " - ") : (cout << " ");
        soma += idades[i];
        //menor_idade = idades[i];
        //maior_idade = idades[i];
        // menor idade
        if (idades[i] < menor_idade)
            menor_idade = idades[i];
        // maior idade
        if (idades[i] > maior_idade)
            maior_idade = idades[i];
    }
    media_idades = soma / 10;
    cout << "\n Média das idades: " << media_idades << endl;
    cout << " Maior idade: " << maior_idade << endl;
    cout << " Menor idade: " << menor_idade << endl;

	cout<<"\n\n\n\n";
	
	return 0;
}
