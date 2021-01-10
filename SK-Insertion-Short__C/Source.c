#pragma warning(disable:4996)

#include "stdio.h"
#include "conio.h"

/* Created By Rizky Khapidsyah */

int main() {
	int i, j;
	int n;
	int Tmp;
	int Arr[100];

	printf("\nInputkan banyak data yang akan diurutkan : ");
	scanf("%i", &n);
	
	for (i = 0; i < n; i++) {
		printf("Masukan data ke %i : ", i + 1);
		scanf("%i", &Arr[i]);
	}
	
	for (i = 1; i < n; i++) {
		Tmp = Arr[i];
		j = i - 1;
	
		while (Arr[j] >= Tmp && j > 0) {
			Arr[j + 1] = Arr[j];
			j = j - 1;
		}
		
		if (Tmp >= Arr[j]) {
			Arr[j + 1] = Tmp;
		} else {
			Arr[j + 1] = Arr[j];
			Arr[j] = Tmp;
		}
	}
	
	printf("\nSetelah Pengurutan\n");
	
	for (i = 0; i < n; i++) {
		printf("Elemen ke %i : %i\n", i + 1, Arr[i]);
	}
	
	_getch();
	return 0;
}