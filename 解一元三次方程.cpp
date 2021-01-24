//ca//the solution of the linear equation of ternary
//with the dichonomy to solve problem
//demand the root has at least 1 interval
#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996);
double parametervalue(double a, double b, double c, double d, double x) {
	//calculate the value of the ternary polynomial
	return a * x * x * x + b * x * x + c * x + d;
}
double dichonomy(double a, double b, double c, double d, double x1, double x2) {
	//utilize the dichonomy to make sure the precise interval
	double boundary1, boundary2,medium;
	boundary1 = x1;
	boundary2 = x2;
	while (boundary2 - boundary1>=0.001) {
		medium = (boundary1 + boundary2) / 2;
		if (parametervalue(a, b, c, d, boundary1) * parametervalue(a, b, c, d, medium) <= 0) boundary2 = medium;
		else boundary1 = medium;
	}
	return medium;
}
int main(void) {
	double a, b, c, d;
	int j = 0;
	double leftboundary, rightboundary;//the boundary of the interval
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	for (int i=-100; i < 101; i++) {
		leftboundary = i;
		rightboundary = i + 1;
		if (!parametervalue(a, b, c, d, leftboundary))printf("%.2lf ",leftboundary);
		else if (parametervalue(a, b, c, d, leftboundary) * parametervalue(a, b, c, d, rightboundary) < 0)
			printf("%.2lf ",dichonomy(a, b, c, d, leftboundary, rightboundary));
	}
	j = 0;
	return 0;
}