#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 50

/*Implementação de uma fila estática*/

struct info {
	int start;
	int end;
} Info;

int list[TAM];

void init() {
	Info.start = 0;
	Info.end = -1;
}

void view() {
	printf("\n------------------------------\n");
	for (int i = Info.start; i < Info.end; i++) {
		printf("[%2d] %d\n", i, list[i]);
	}
	printf("\n------------------------------\n");
}

void add(int v) {
	Info.end++;
	list[Info.end] = v;
}

void del(int amount) {
	int i = 0;
	while (i < amount) {
		Info.start++;
		i++;
	}
}

int main()
{
	init();
	int i = 0;
	while (i < 10) {
		add((1+i) * 3);
		i++;
	}
	view();
	del(3);
	view();
	return 0;
}
