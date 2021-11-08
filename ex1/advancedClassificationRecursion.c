#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int recursiveArmstrong(int n, int Times , int sum) {
    int Reminder;
    if (n > 0) {
        Reminder = n % 10;
        sum = sum + pow(Reminder, Times);
        sum+=recursiveArmstrong(n / 10, Times,sum);
        return sum;
    } else
        return 0;
}

int isArmstrong(int n) 
{
    int count = 0, temp;
    temp = n;
    while (temp != 0)
    {
        count = count + 1;
        temp = temp / 10;
    }
    int sum = recursiveArmstrong(n, count,0);
    if (sum == n) {
        return 1;
    }
    return 0;
}
int reverse(int num, int sum)
{
    if (num == 0)
    {
        return sum;
    }
    sum = (sum*10) + (num%10); //
    return reverse(num/10, sum);
}
int isPalindrome(int n) 
{
    if (n== reverse(n,0))
    {
        return 1;
    }
    return 0;
}



