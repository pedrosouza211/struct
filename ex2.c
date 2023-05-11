/*Questão 02:
Implementar uma função que, dadas duas
strings s1 e s2, crie uma nova string – s3 –
contendo todos os caracteres de s1 que não 
estejam em s2.
Nota: em s3, não devem existir caracteres 
repetidos*/

#include<string.h>
#include<stdio.h>
#include<stdlib.h>


void funcaoS3(char s1[], char s2[], char s3[]);
int busca (char st[], char ch);
void main()
{
	
	char st1[20], st2[20], st3[20];
	printf("Escreva a s1:");
	fflush(stdin);
	gets(st1);
	
	
	printf("Escreva a s2:");
	fflush(stdin);
	gets(st2);
	
	 funcaoS3(st1, st2,st3);
	 
	printf("String 1 : %s\n", st1);
   printf("String 2 : %s\n", st2);
   printf("String 3 : %s", st3);
	
}
void funcaoS3(char s1[], char s2[], char s3[])
{
	
	int i, k, j;
	
	for(i=0;i<s1[i];i++)
	{
		if(busca (s2, s1[i])  <0 )
		{
			if(busca (s3, s1[i]) <0)
			{
				s3[j]=s1[i];
				s3[j+1] = '\0';
				j++;
			}
		}
		   
	}
	
}


int busca (char st[], char ch)
{
	
	int i;
	
	for(i=0;st[i];i++)
	{
		if(st[i]==ch)
		{
			return i;
		}
	}
	return -1;
	
}


