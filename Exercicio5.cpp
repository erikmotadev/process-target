#include <stdio.h>
#include <stdlib.h>
#define Tamanho 100

int main(){
	int I, Digitos=0;
	char String[100], Invertido[Tamanho];
	printf("Digite uma string: ");
	gets(String);
	for(I=0; String[I] != '\0'; I++){
		Digitos += 1;
	}
	for (I=0; I<Digitos; I++){
		Invertido[I] = String[Digitos-I-1];
	}
	printf("String invertida: %s\n\n", Invertido);
	system("Pause");
}
