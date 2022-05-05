# include<stdio.h>

int main(){
    int a[5][5], b[5][5];
    int i, j;
    printf("Enter the elements of  : \n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%d",&a[i][j]);
    }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            b[i][j] = a[j][i];
            printf("%d",b[i][j]);
        }
            printf("\n");
    }
    return 0;
}