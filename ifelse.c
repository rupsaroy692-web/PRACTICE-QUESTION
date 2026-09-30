#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks:(0-100)");
    scanf("%d" , &marks);

    if (marks>=00 && marks<=30)
    printf("fail");
    else if (marks>30 && marks<=100)
    printf("pass");
    else 
    printf("not valid input");

    return 0;
}