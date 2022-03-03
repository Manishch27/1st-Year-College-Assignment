# include<stdio.h>
int main(){
    int row, col, Num;
    printf("Enter the number : ");
    scanf("%d",&Num);
    for(row=1; row<=Num; row++){
        for(col=1; col<=Num; col++){
            printf("*");
        }
        printf("\n");
    } 
    return 0;
}