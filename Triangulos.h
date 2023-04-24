#include <stdio.h>

main(){
	float l1, l2, l3;
	
	printf("DIGITE LADO 1:\n");
	scanf("%f",&l1);
	printf("DIGITE LADO 2:\n");
	scanf("%f",&l2);
	printf("DIGITE LADO 3:\n");
	scanf("%f",&l3);
	
	if((l1==l2) && (l2==l3)){
		printf("TRIANGULO EQUILATERO!");
	}
	else if((l1==l2) && (l2!=l3)){
		printf("TRIANGULO ISOSCELES!");
	}
	else if((l1!=l2) && (l2!=l3)){
		printf("TRIANGULO ESCALENO!");
	}
	else{
		printf("ERROR!!!!");
	}
}
