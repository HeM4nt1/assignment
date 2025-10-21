#include<stdio.h>
#include"mylib.h"
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int x=isArmstrong(num);
    if(x==1)
        printf("the entered number is an armstrong number");
    else
        printf("the entered number is not an armstrong number");
    int y=isAdams(num);
    if(y==1)
        printf("the enterd number is an adam number");
    else
        printf("the enterd number is not an armstrong number");
    int z=isPrimePalindrome(num);
    if(z==1)
        printf("the entered number is a prime and pailndrome");
    else
        printf("the  enterd number is not both prime and palindrome");
    return 0;

}
