#include<stdio.h>
int main() {
    int a , b , q , r;
    printf("enter first number:");
    scanf("%d" , &a);
    printf("enter second number:");
    scanf("%d" , &b);
    q=a/b;
    r=a-b*q;
    printf("the remainder of the following:%d" , r);
    return 0;

}