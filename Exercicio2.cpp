#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	int Fib1=0, Fib2=1, Num=0, Aux=0, I=0;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número: ");
	scanf("%d", &Num);
	while (Num != Aux && Num > Aux){
		Aux = Fib1 + Fib2;
		Fib1 = Fib2;
		Fib2 = Aux;
	}
	if (Num == Aux){
		printf("O número informado pertence a sequência de fibonacci.\n\n");
	}
	else {
		printf("O número informado não pertence a sequência de fibonacci.\n\n");	
	}
	system("Pause");
}
