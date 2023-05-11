#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TAM 3
/*Questão 04:
Suponha a existência de um vetor de tamanho
TAM, cada posição armazenando o nome da
pessoa e a sua data de aniversário
(representada por um struct do tipo TData,
contendo os campos dia e mes). Pede-se o
desenvolvimento das seguintes funções:
? Determinar a quantidade de pessoas que
fazem aniversário no mês M;
? Exibir os nomes de todas pessoas que fazem
aniversário entre as datas d1 e d2, ambas
do tipo TData.*/



typedef struct{
	
	int dia;
	int mes;
	
}TData;

typedef struct{
	
	char nome[10];
	 
	 TData aniv;
	
}TPessoa;

void preencherPessoa(TPessoa vetPessoa[]);
int funcProcuraMes(TPessoa vetPessoa[], int  M);
void funcaoD1D2(TPessoa vet[], int dia1, int dia2);
void main()
{
	int resp, m;
	int d1, d2;
	
   TPessoa vetP[TAM];
   
   preencherPessoa(vetP);
   
   printf("Digite o mes, pra saber quantas pessoas fazem aniversario nele: ");
   scanf("%d", &m);
   
   resp = funcProcuraMes(vetP, m);
   
   printf("Total de pessoas q fazem aniversario no mes '%d' : %d", m, resp );
   
   d1 = 5;
   d2 = 9;
   
   funcaoD1D2(vetP, d1, d2);
   
   
	
}

void funcaoD1D2(TPessoa vet[], int dia1, int dia2)
{
	
	int i;
	
	printf("\n\nPessoas q fazem aniversaro entre o dia %d e o dia %d\n\n", dia1, dia2);
	
	for(i=0;i<TAM;i++)
	{
		if(vet[i].aniv.dia >= dia1)
		{
			if(vet[i].aniv.dia <=dia2 )
			{
				printf("%s\n",vet[i].nome);
			}
		}
	}
	
}
 void preencherPessoa(TPessoa vetPessoa[])
 {
 	int i;
 	
 	for(i=0;i<TAM;i++)
 	{
 		printf("Digite seu nome: ");
 		fflush(stdin);
 		gets(vetPessoa[i].nome);
 		
 		printf("Digite o dia do seu aniversario: ");
 		scanf("%d", &vetPessoa[i].aniv.dia);
 		
 		printf("Digite o mes do seu aniversario:");
 		scanf("%d", &vetPessoa[i].aniv.mes);
 		
	 }
 	
 	
 	
 	
 }
 
 int funcProcuraMes(TPessoa vetPessoa[], int  M)
 {
 	
 	int i, cont=0;
 	
 	for(i=0;i<TAM;i++)
 	{
 		if((vetPessoa[i].aniv.mes)==M)
 		{
 			cont++;
		 }
	 }
 	
 	return cont;
 }

