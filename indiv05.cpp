// indiv05.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
int main() 
{
	int mas[10];
	double n=5;
	
	double m = 0;
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < 10; i++) {
			mas[i] = rand() % 100 - 50;
			printf("%d ", mas[i]);
			if (mas[i] == 8)m++;
		}
		printf("\n");
	}
	double p = m / (n * 10);
	printf("P=m/n= %f", p);
	return 0;
}