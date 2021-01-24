//calculate the point of intersection
//use the array to store the point
//which has the number of point intersect has the intersection
#pragma warning (disable:4996);
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int* pointsinit(int number) {
	//init the polygon
	int i, * point;
	point = (int*)malloc(sizeof(int) * number);
	for (i = 0; i < number; i++) point[i] = i;
	return point;
}
int main(void) {
	int points,*polygon;
	int i, j, k, t;
	long number = 0;
	scanf("%d", &points);
	polygon = pointsinit(points); 
	for (i = 0; i < points-2; i++) {
		for (j = i + 2; j < points; j++) {//confirm one side as the standard
			for (k = i + 1; k < j; k++) {
				for (t = j + 1; t < points; t++) {
					number++;
				}
			}
		}
	}
	printf("%ld", number);
}