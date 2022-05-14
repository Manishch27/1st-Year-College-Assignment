//  Program to differentiate between call by value vs call by reference by an example of swap two numbers

# include<stdio.h>

void swap_by_value(int num1, int num2);

void swap_by_reference(int *num1, int *num2);

int main(){
    int num1 = 5; 
    int num2 = 6;
    printf("\n<-----------Call by Value----------->\n ");
    printf("num1 is = %d \n",num1); // Before function call value of number 1
    printf("num2 is = %d \n",num2); // Before function call value of number 2
    swap_by_value(num1, num2); 
    printf("num1 is = %d \n",num1); // After function call value of number 1
    printf("num2 is = %d",num2); // After function call value of number 2
    
    printf("\n<----------- Call by Reference ----------->\n");
    printf("num1 is = %d \n",num1); // Before function call value of number 1
    printf("num2 is = %d \n",num2); // Before function call value of number 2
    swap_by_reference(&num1, &num2); 
    printf("num1 is = %d \n",num1); // After function call value of number 1
    printf("num2 is = %d",num2); // Affter function call value of number 2
    return 0;
}

void swap_by_value(int num1, int num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void swap_by_reference(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
