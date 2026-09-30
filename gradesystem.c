#include<stdio.h>
int main(){
    int marks;
    printf("enter marks: (0-100)");
    scanf("%d" , &marks);

    if (marks<30)
    printf("C");
    else if ("marks>=30 && marks<50")
    printf("B");
    else if ("marks>=50 && marks<90")
    printf("A");
    else 
    printf("A+");
}