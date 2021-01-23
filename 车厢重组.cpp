//the retranversion of train
//the sort bubble
#pragma warning (disable:4996);
#include<stdio.h>
int main(void) {
	int number,a[1000];
	scanf("%d", &number);//the number of train
	int i, j, t, k = 0;
	for (i = 0; i < number; scanf("%d", &a[i++]));
	for (i = 0; i < number - 1; i++) {
		for (j = i + 1; j < number; j++) {
			if (a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				k++;
			}
		}
	}
	printf("%d", k);
}