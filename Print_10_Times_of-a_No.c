// Program to print 10 times of a number using a function

# include<stdio.h>
void tenTimes(int *num);

int main(){
    int num; 
    printf("Enter a number : ");
    scanf("%d",&num);

    tenTimes(&num);

    printf("The ten times of number is = %d",num);

    return 0;
}

void tenTimes(int *num){
    *num *=10;
}