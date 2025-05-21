/* 6. FUP que leia a idade, o sexo e a altura de N pessoas, 
onde N pessoas deverá ser o limite da repetição do FOR e 
deverá ser solicitado ao usuário. Após a entrada dos valores o 
programa deverá informar:
 A média de todas as idades e alturas.
 A média das alturas e das idades das mulheres.
 A média das alturas e das idades dos homens.
 A quantidade de mulheres acima de 1,70 m.
 A quantidade de homens acima de 1,85 m.
 A quantidade de mulheres abaixo de 1,65 m.
 A maior e menor altura de todos.
 A maior e menor idade de todos
 A maior altura e maior idade dos homens.  
  A menor altura e menor idade das mulheres.
*/
#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;
int idade,pessoas=0,i,acum_Idade,acum_Idade_Fem,acum_Idade_Mas,cont_Alt_Fem1,cont_Alt_Mas1,cont_Alt_Fem2, cont_Mulher, cont_Homem;
float altura,acum_Altura,acum_Alt_Fem,acum_Alt_Mas;
char sexo;
main(){
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<"\n\t ===========================================";
	cout<<"\n\t\t PROGRAMA IDADE, SEXO E ALTURA ";
	cout<<"\n\t ===========================================\n";
	cout<<"\n\nDigite quantas pessoas quer informar: ";
	cin>>pessoas;
	sexo = toupper(sexo);
	for (i = 1; i <=pessoas; i++){ //coleta de dados
		cout<<"\n\nDigite a idade da "<< i <<"ª pessoa: ";
		cin>>idade;
		cout<<"Digite o sexo da "<< i <<"ª pessoa (M ou F): ";
		cin>>sexo;
		cout<<"Digite a altura da "<< i <<"ª pessoa: ";
		cin>>altura;
		// Acumulador de todas as idades
		acum_Idade =+ idade;
		// Acumulador de todas as alturas
		acum_Altura =+ altura;
			//A média das alturas e das idades das mulheres
			if (sexo == 'F'){
				cont_Mulher++;
				acum_Alt_Fem=+altura;
				acum_Idade_Fem=+idade;
			}
			//A média das alturas e das idades dos homens
			if (sexo == 'M'){
				cont_Homem;
				acum_Alt_Mas=+altura;
				acum_Idade_Mas=+idade;
			}
			// A quantidade de mulheres acima de 1,70 m
			if (sexo == 'F' && altura > 1.70)
				cont_Alt_Fem1++;
			// A quantidade de homens acima de 1,85 m
			if (sexo == 'M' && altura > 1.85)
				cont_Alt_Mas1++;
			//A quantidade de mulheres abaixo de 1,65 m
			if (sexo == 'F' && altura > 1.65)
				cont_Alt_Fem2++;
	}
	media_
	cout << "\n\n> 👧� Média de todas as idades: " << acum_Idade / pessoas;
	cout << "\n> 👧👦 Média de todas as alturas: " << acum_Altura / pessoas;
	cout << "\n> 👧 Média das idades das mulheres: " << acum_Idade_Fem / cont_Mulher;
	cout << "\n> 👧 Média das alturas das mulheres: " << acum_Alt_Fem / cont_Mulher;
	cout << "\n> 👧 Quantidade de mulheres acima de 1,70m: " << cont_Alt_Fem1;
	cout << "\n> 👦 Quantidade de homens acima de 1,85m: " << cont_Alt_Mas1;
	cout << "\n> 👧 Quantidade de mulheres abaixo de 1,65m: " << cont_Alt_Fem2;
	
	
	cout<<"\n\n\n\n";
}