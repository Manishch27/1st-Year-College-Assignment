//  Program to find the sum and average of two numbers using pointers and functions

# include<stdio.h>

int sum_average(int num1, int num2, int  *sum, float *average);

int main(){
    int num1, num2, sum;
    float avg;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    sum_average(num1,num2,&sum, &avg);
    printf("Sum of number 1 and number 2 is = %d \n",sum);
    printf("Average of two numbers is = %f",avg);
    return 0;
}

int sum_average(int num1, int num2, int *sum, float * average){

    *sum = num1+num2;
    *average = (num1+num2)/2;
}
