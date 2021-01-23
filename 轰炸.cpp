//the bang of the important point
//the 2's array
#pragma warning (disable:4996);
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int **space1(int m, int n) {//the application of the space
	int i, j, **matrix;
	matrix = (int**)malloc(sizeof(int*) * m);//the m storage line
	for (i = 0; i < m; i++)
		matrix[i] = (int*)malloc(sizeof(int) * n);//the n storage list
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			matrix[i][j] = 0;
	return matrix;
}
int* space2(int m) {
	int * array;
	array = (int*)malloc(sizeof(int) * m);
	return array;
}
int main(void) {
	int m, n, x, y;//the m,n is the coordinate of the matrix and the x,y is the times of bang and the point
	int a[4];//the coordinate of bomb and make a tag on which is bombed
	int i, p, q;
	int** area,**tag,*array1,*array2;//the city
	scanf("%d%d%d%d", &m, &n, &x, &y);
	area = space1(m,n);
	tag = space1(m, n);
	array1 = space2(y);
	array2 = space2(y);
	for (i = 0; i < x; i++) {
		scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]);
		for (p = a[0] - 1; p < a[2]; p++) {
			for (q = a[1] - 1; q < a[3]; q++) {
				area[p][q]++;//record the times of bang
				tag[p][q] = i + 1;//record the last bang
			}
		}

	}
	for (i = 0; i < y; i++) {
		scanf("%d%d", &array1[i],&array2[i]);
	}
	for (i = 0; i < y; i++) {
		if (area[array1[i] - 1][array2[i] - 1] > 0)printf("Y %d %d\n", area[array1[i] - 1][array2[i] - 1], tag[array1[i] - 1][array2[i] - 1]);//this area was bang
		else printf("N\n");//not yet
	}
	return 0;
}