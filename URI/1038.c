#include <stdio.h>

int main (void ){
	int cod,qt;
	float total;

	scanf("%d %d", &cod,&qt);

	switch (cod)
	{
		case 1 :
			total=qt*4.00;
			printf ("Total: R$ %.2f\n",total);
		break;

		case 2 :
			total=qt*4.50;
			printf ("Total: R$ %.2f\n",total);
		break;

		case 3 :
			total=qt*5.00;
			printf ("Total: R$ %.2f\n",total);
		break;

		case 4 :
			total=qt*2.00;
			printf ("Total: R$ %.2f\n",total);
		break;

		case 5 :
			total=qt*1.50;
			printf ("Total: R$ %.2f\n",total);
		break;

	}

	return 0;
}