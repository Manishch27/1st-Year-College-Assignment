//  Program to print inverted half Pyramid pattern with user input
# include<stdio.h>
int main(){
    int row,col, num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(row = num; row>=1; row--){ 
        for(col =1 ; col<=row; col++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}