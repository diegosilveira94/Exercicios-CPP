/* Solicite ao usuário a distância a ser percorrida (em km) e a velocidade média do veículo (em km/h). Calcule e exiba o tempo de viagem em horas.
Fórmula: Tempo = Distância / Velocidade */

#include <iostream>
#include <iomanip>

using namespace std;

float distancia,vel_media,tempo;

main()
{
	system("chcp 65001"); //Para acentuar as palavras
	system("cls"); // Limpar a tela
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\n\t Cálculo do Tempo de Viagem";
	cout<<"\n\t ==========================";
	cout<<"\n\n\n Distância em km:  ";
	cin>>distancia;
	cout<<"\n Velocidade média em km/h: ";
	cin>>vel_media;
	tempo = distancia / vel_media;
	cout<<"Tempo da viagem:  "<<tempo << " hora(s)";
}
