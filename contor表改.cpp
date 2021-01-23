//the DNF of zhao
#pragma warning (disable:4996);
#include<stdio.h>
#include<math.h>
int main(void) {
	long long N,i,j;
	scanf("%lld", &N);
	i = sqrt(2 * N);
	for (j = i - 1; j < i + 1; j++) {
		if (j * (j + 1) / 2 < N && (j + 1) * (j + 2) / 2 >= N) break;
	}
	if (j % 2 == 1)
		printf("%lld/%lld", N - j * (j + 1) / 2, j + 2 - (N - j * (j + 1) / 2));
	else
		printf("%lld/%lld", j + 2 - (N - j * (j + 1) / 2), N - j * (j + 1) / 2);
	return 0;
}