/* Crie um programa com um menu de perguntas. O programa deve permitir ao usuário
escolher entre 3 perguntas, e para cada pergunta, exibir a resposta correta. Use o
comando switch para selecionar qual pergunta o usuário quer responder.
*/
#include <iostream>
//#include <iomanip> //biblioteca C++
using namespace std;
int opcao;
main()
{
	system("chcp 65001");// Para acentuar as palavras
	system("cls");
//	cout<<fixed<<setprecision(2);
	cout<<"\n\n\n\t\t Jogo de Perguntas ";
	cout<<"\n\t ===================================";
	cout<<"\n\n\n[1] - Se um avião cai na fronteira do Brasil com a Argentina, onde enterram os sobreviventes?\n[2] - Qual era a cor do cavalo branco de Napoleão?\n[3] - O que é mais pesado: um quilo de chumbo ou um quilo de algodão?\n\nEscolha uma opção --> ";
	cin>>opcao;
    opcao = toupper(opcao);
		switch(opcao){
			case 1: {
				cout<<"\nResposta: Sobreviventes não são enterrados!";
				break;}
			case 2: {
				cout<<"\nResposta: Branco!";
				break;}
			case 3: {
				cout<<"\nResposta: As duas opções tem 1kg";
				break;}				
			default: // Caso digite outra coisa
				cout<<"Você não escolheu uma das opções\n\n\n\n";
	}
		cout<<"\n\n\n\n";			
}