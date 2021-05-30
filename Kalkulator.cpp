#include <stdio.h>
#include <math.h>
#include <cmath>

int main (void){

	int x;
	
		double a, b, c;
		int select, o;
	
	while(x != 1 && x != 2){
		printf("1 = Operacije\n2 = Raèunanje opsega\nOdaberi funkciju:");
		scanf("%d", &x);
	}
		
	if (x == 1){
	
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
		
	}else{
		
		while(o != 1 && o != 2 ){
			printf("\n1 = Kvadrat\n2 = Pravokutnik\n3 = Trokut\nOdaberi geometrijski lik:");
			scanf("%d", &o);
		}
		
		switch (o){
			case 1:
				int opsKvadr, strKvadr;
				printf("\nUnesi stranicu kvadrata: ");
				scanf("%d", &strKvadr);
				opsKvadr = 4 * strKvadr;
				printf("\nOpseg kvadrata je %d", opsKvadr);
				break;
				
			case 2:
				int opsPrav, strPrav1, strPrav2;
				printf("\nUnesi 1. stranicu: ");
				scanf("%d", &strPrav1);
				printf("\nUnesi 2. stranicu: ");
				scanf("%d", &strPrav2);
				opsPrav = (2 * strPrav1) + (2 * strPrav2);
				printf("\nOpseg pravokutnika je %d", opsPrav);	
				break;
				
			case 3:
				int opsTro, strTro1, strTro2, strTro3;
				printf("\nUnesi 1. stranicu: ");
				scanf("%d", &strTro1);
				printf("\nUnesi 2. stranicu: ");
				scanf("%d", &strTro2);
				printf("\nUnesi 2. stranicu: ");
				scanf("%d", &strTro3);
				opsTro = strTro1 + strTro2 + strTro3;
				printf("\nOpseg pravokutnika je %d", opsTro);	
				break;
		}
			
	}

	
	return 0;
}
