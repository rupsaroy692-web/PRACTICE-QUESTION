#include <stdio.h>
int main(){
    char ch ;
    printf("enter the character:");
    scanf("%c" , &ch);

    if (ch>='a' && ch<='z')
    printf("it is LOWER case character");

    else if (ch>='A' && ch<='Z')
    printf("it is UPPER case charcater");

    else
    printf("not valid input");

    return 0;
}