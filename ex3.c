#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void funcaoPos(char str[], int posi, char s1[], char s2[] );

void main()
{
	char string[20], st1[20], st2[20];
	int pos;
	
	printf("Escreva a string:");
	fflush(stdin);
	gets(string);
	
	printf("Escolha a posição: ");
	scanf("%d", &pos);
	
	
	funcaoPos(string, pos, st1, st2);
	
	printf("String original: %s\n\n", string);
	printf("String s1: %s\n\n", st1);
	printf("String s2: %s", st2);
	
}
void funcaoPos(char str[], int posi, char s1[], char s2[] )
{
	
	int i, j=0, k=0;
	
	for(i=0;i<str[i];i++)
	{
		
		if(i<=posi-1)
		{
			s1[j]=str[i];
			s1[j+1]='\0';
			j++;
			
		}
		else
		{
			if(i>=posi)
			{
				s2[k]=str[i];
				s2[k+1]='\0';
				k++;
			}
		}
		
		
		
	}
	
	
	
}





