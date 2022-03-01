// Program to calculate sum and percentage of marks in five subject by user input

# include<stdio.h>

void main(){
    int Maths, Physics ,Chemistry, ComputerScience, English, sum;
    float per;

    printf("Enter Marks in Five Subjects : ");
    scanf("%d%d%d%d%d",&Maths,&Physics,&Chemistry,&ComputerScience,&English);

    sum = Maths+Physics+Chemistry+ComputerScience+English;
    per = (sum*100)/500;

    printf("Total marks obtained = %d \n Percentage = %.2f%%",sum,per);
}