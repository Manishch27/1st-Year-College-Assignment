//  Program to calculate simple interest and compound interest values with user input
# include<stdio.h>
# include<math.h>

void main(){
    float p, r, t, a,n, si, ci;
	printf("Enter Principle= ");
	scanf("%f",&p);
	printf("Enter Rate= ");
	scanf("%f",&r);
	printf("Enter Time= ");
	scanf("%f",&t);
    printf("Enter number of times interest applied in a year = \n");
    scanf("%f",&n);

	si=(p*r*t)/100;
	printf("Simple Interest= Rs %.2f",si);  // Simple interest Calculated here, Now we will calculate Compound interest

    ci = p*(pow(1+r/(100*n),n*t));
    printf("Compound Interest = Rs %.2f",a);
}
