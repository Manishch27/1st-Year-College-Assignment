# include<stdio.h>

int main(){
    int i = 5, *ptr, **pptr;

    ptr = &i;
    pptr = &ptr;

    printf("The value of variable i through double pointer is = %d",**pptr);

    return 0;
}