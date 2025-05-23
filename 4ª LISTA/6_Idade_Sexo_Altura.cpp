/* 6. FUP que leia a idade, o sexo e a altura de N pessoas, onde N pessoas deverá ser o limite da repetição do FOR e deverá ser solicitado ao usuário. Após a entrada dos valores o programa deverá informar:
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
int idade, pessoas=0, i, acum_Idade=0, acum_Idade_Fem=0, acum_Idade_Mas=0, cont_Alt_Fem1=0, cont_Alt_Mas1=0, cont_Alt_Fem2=0, cont_Mulher=0, cont_Homem,menor_idade,menor_idade_homens,maior_idade_homens,maior_idade,menor_idade_mulheres,maior_idade_mulheres;
float altura,acum_Altura=0,acum_Alt_Fem=0,acum_Alt_Mas=0,menor_alt_homens=0,maior_alt_homens,menor_alt_mulheres=0,maior_alt_mulheres=0, maior_altura, menor_altura;
char sexo;
int main(){
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
	cout<<fixed<<setprecision(2);
	cout<<"\n\t ===========================================";
	cout<<"\n\t\t PROGRAMA IDADE, SEXO E ALTURA ";
	cout<<"\n\t ===========================================\n";
	cout<<"\n\nDigite quantas pessoas quer informar: ";
	cin>>pessoas;
	
	maior_idade = INT_MIN;
    menor_idade = INT_MAX;
    maior_altura = -1;
    menor_altura = 999;
    
    maior_idade_homens = INT_MIN;
    menor_idade_homens = INT_MAX;
    maior_alt_homens = -1;
    menor_alt_homens = 999;
    
    maior_idade_mulheres = INT_MIN;
    menor_idade_mulheres = INT_MAX;
    maior_alt_mulheres = -1;
    menor_alt_mulheres = 999;
    
	for (i = 0; i < pessoas; i++){ //coleta de dados
		cout<<"\n\nIdade "<< i + 1<<"ª pessoa: ";
		cin>>idade;
		cout<<"Sexo "<< i + 1<<"ª pessoa (M ou F): ";
		cin>>sexo;
		sexo = toupper(sexo);
		cout<<"Altura "<< i + 1<<"ª pessoa: ";
		cin>>altura;
		// Acumulador de todas as idades
		acum_Idade += idade;
		// Acumulador de todas as alturas
		acum_Altura += altura;
		// maior idade de todos
		if(idade > maior_idade)
			maior_idade = idade;
		//menor idade de todos
		if (idade < menor_idade)
			menor_idade = idade;
		// maior altura de todos
		if (altura > maior_altura)
			maior_altura = altura;
		// menor altura de todos;
		if (altura < menor_altura)
			menor_altura = altura;
		// menor altura dos homens
		if (sexo == 'M' && altura < menor_alt_homens)
			menor_alt_homens = altura;
		// maior altura dos homens
		if (sexo == 'M' && altura > maior_alt_homens)
			maior_alt_homens = altura;
		// menor idade dos homens
		if (sexo == 'M' && idade < menor_idade_homens)
			menor_idade_homens = idade;
		// maior idade dos homens
		if (sexo == 'M' && idade > maior_idade_homens)
			maior_idade_homens = idade;
		// menor altura das mulheres
		if (sexo == 'F' && altura < menor_alt_mulheres)
			menor_alt_mulheres = altura;
		// maior altura das mulheres
		if (sexo == 'F' && altura > maior_alt_mulheres)
			maior_alt_mulheres = altura;
	    // maior idade mulheres
	    if (sexo == 'F' && idade > maior_idade_mulheres)
			maior_idade_mulheres = idade;
		// menor idade mulheres
		if (sexo == 'F' && idade < menor_idade_mulheres)
		    menor_idade_mulheres = idade;
		//A média das alturas e das idades das mulheres
		if (sexo == 'F'){
			cont_Mulher++;
			acum_Alt_Fem += altura;
			acum_Idade_Fem += idade;
		}
		//A média das alturas e das idades dos homens
		if (sexo == 'M'){
			cont_Homem++;
			acum_Alt_Mas += altura;
			acum_Idade_Mas += idade;
		}
		// A quantidade de mulheres acima de 1,70 m
		if (sexo == 'F' && altura > 1.70)
			cont_Alt_Fem1++;
		// A quantidade de homens acima de 1,85 m
		if (sexo == 'M' && altura > 1.85)
			cont_Alt_Mas1++;
		//A quantidade de mulheres abaixo de 1,65 m
		if (sexo == 'F' && altura < 1.65)
			cont_Alt_Fem2++;
	} 
	cout << "\n\n> 👧👦 Média de todas as idades: " << acum_Idade / pessoas;
	cout << "\n> 👧👦 Média de todas as alturas: " << acum_Altura / pessoas;
	cout << "\n> 👧 Média das idades das mulheres: " << (cont_Mulher != 0 ? acum_Idade_Fem / cont_Mulher : 0);
	cout << "\n> 👧 Média das alturas das mulheres: " << (cont_Mulher != 0 ? acum_Alt_Fem / cont_Mulher : 0);
	cout << "\n> 👧 Quantidade de mulheres acima de 1,70m: " << cont_Alt_Fem1;
	cout << "\n> 👦 Quantidade de homens acima de 1,85m: " << cont_Alt_Mas1;
	cout << "\n> 👧 Quantidade de mulheres abaixo de 1,65m: " << cont_Alt_Fem2;
	cout << "\n> 👧👦 Menor idade de todos: " << menor_idade;
	cout << "\n> 👧👦 Maior idade de todos: " << maior_idade;
	cout << "\n> 👧👦 Maior altura de todos: " << maior_altura;
	cout << "\n> 👧👦 Menor altura de todos: " << menor_altura;
	cout << "\n> 👦 Menor idade dos homens: " << menor_idade_homens;
	cout << "\n> 👦 Maior idade dos homens: " << maior_idade_homens;
	cout << "\n> 👧 Menor idade das mulheres: " << menor_idade_mulheres;
	cout << "\n> 👧 Maior idade das mulheres: " << maior_idade_mulheres;
	cout << "\n> 👦 Maior altura dos homens: " << maior_alt_homens;
	cout << "\n> 👦 Menor altura dos homens: " << menor_alt_homens;
	cout << "\n> 👧 Maior altura das mulheres: " << maior_alt_mulheres;
	cout << "\n> 👧 Menor altura das mulheres: " << menor_alt_mulheres;
	
	cout<<"\n\n\n\n";
	
	return 0;
}
