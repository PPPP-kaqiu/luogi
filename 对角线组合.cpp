//calculate the point of intersection
//use the array to store the point
//which has the number of point intersect has the intersection
//warning the overflow
//to solve the problem we should do the division first to reduce the bit of the big number 
#pragma warning (disable:4996);
#include<stdio.h>
int main(void) {
	unsigned long long points,number;
		scanf("%lld", &points);
		number = points * (points - 1)/2 * (points - 2)/3 * (points - 3)/4 ;//C_{n}^{n-4}
		printf("%lld\n", number);
	return 0;
}