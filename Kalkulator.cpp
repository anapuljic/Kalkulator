#include <stdio.h>
#include <math.h>
#include<cmath>

int main (void){

	double a, b, c;
	int select;
	
	printf("Unesi prvi broj: ");
	scanf("%d", &a);
	printf("Unesi drugi broj: ");
	scanf("%d",  &b);
	
	while(select != 1 && select != 2 && select != 3 && select != 4 && select != 5){
		printf("\n1 = Zbrajanje\n2 = Oduzimanje\n3 = Mnozenje\n4 = Dijeljenje\n5 = Potenciranje\nOdaberi funkciju:");
		scanf("%d", &select);
	}
	
	switch (select){
		case 1:
			c = a + b;
			printf("\nZbrajanje: %d + %d = %d", a, b, c);
			break;
			
		case 2:
			c = a - b;
			printf("\nOduzimanje: %d - %d = %d", a, b, c);
			break;
			
		case 3:
			c = a * b;
			printf("\nMnozenje: %d * %d = %d", a, b, c);
			break;
			
		case 4:
			c = a / b;
			printf("\nDijeljenje: %d / %d = %.2f", a, b, c);
			break;
			
		case 5:
			c = pow (a, b);
			printf("\nPotenciranje: %d ^ %d = %lf", a, b, c);
	}
	
	return 0;
}
