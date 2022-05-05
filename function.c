# include<stdio.h>

void indian(){
    printf("Namaste!");
}

void french(){
    printf("Bojour");
}

int main(){
    char nation;
    printf("Enter the nationality in i and f : \n");
    scanf("%c",&nation);
    if(nation == 'i'){
        indian();
    }
    else if(nation=='f'){
        french();
    }
    return 0;
}