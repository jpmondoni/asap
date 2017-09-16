#include <stdio.h>
#include <stdlib.h>

int main(){
	float a, b, c, p, ar;

	scanf("%f %f %f", &a, &b, &c);

	if((b-c) < a && a < (b+c) && (a-c) < b && b < (a+c) && (a-b) < c && c < (a+b)){
		p=a+b+c;
		printf("Perimetro = %.1f\n",p);
	} else {
		ar = ((a+b)*c)/2;
		printf("Area = %.1f\n",ar);
	}

	return 0;
}

// 6 4 2
// a b c

// 2 < 6 < 6
// 4 < 4 < 8
// 2 < 2 < 10



