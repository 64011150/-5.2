#include<stdio.h>
int main() {
	int a, i=0, j=;
	scanf_s("%d", &a);
	while (i < a) {
		i = i++;
		j = 0;
		while(j < a) {
			j=j+1;
			printf("*");
		}
		printf("\n");
	}
	return 0;
}