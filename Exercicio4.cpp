#include <stdio.h>
#include <stdlib.h>

int main(){
	int I;
	float FaturamentoTotal=0, Faturamento[5] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
	for (I=0; I<5; I++){
		FaturamentoTotal += Faturamento[I];
	}
	for (I=0; I<5; I++){
		Faturamento[I] = (Faturamento[I] * 100) / FaturamentoTotal;
	}
	printf("Faturamento Percentual de SP: %.2f\n", Faturamento[0]);
	printf("Faturamento Percentual de RJ: %.2f\n", Faturamento[1]);
	printf("Faturamento Percentual de MG: %.2f\n", Faturamento[2]);
	printf("Faturamento Percentual de ES: %.2f\n", Faturamento[3]);
	printf("Faturamento Percentual de Outros: %.2f\n\n", Faturamento[4]);
	system("pause");
}
