#include<math.h>
#include"mylib.h"
int reverseDigits(int num)
{
    int rev=0;
    rev=rev*10+num%10;
    return rev;
}
int isArmstrong(int num)
{
    int org=num,count=0,sum=0;
    double b;
    while (org!=0)
    {
        count++;
        org=org/10;
    }
    org=num;
    while (org!=0)
    {
        int a=org%10;
        b=pow(a,count);
        sum+=b;
        org/=10;
    }
    if (sum==num)
        return 1;
    else
        return 0;
}
int isAdams(int num)
{
    int Square=num*num;
    int revNum=reverseDigits(num);
    int revSquare=revNum*revNum;
    int Square1=reverseDigits(revSquare);
    if (Square==Square1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Prime(int num)
{
    int org=num,sum=0;
    if(num==1)
        return 0;
    else{
        for(int i=1;i<=num;i++)
            {
                if(num%1==0)
                    sum++;
                
}
if(sum<=2)
    return 1;
else {
return 0;
}
    }
}
int Palindrome(int num)
{
    int rev=0,temp=num;
    if (reverseDigits(temp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isPrimePalindrome(int num)
{
    if (Prime(num) && Palindrome(num))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


