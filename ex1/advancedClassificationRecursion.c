#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int recursiveArmstrong(int n, int Times) {
    int Reminder;
    static int Sum = 0;
    if (n > 0) {
        Reminder = n % 10;
        Sum = Sum + pow(Reminder, Times);
        recursiveArmstrong(n / 10, Times);
        return Sum;
    } else
        return 0;
}

int isArmstrong(int n) 
{
    int digitsnum = floor(log10(n) + 1);
    int sum = recursiveArmstrong(n, digitsnum);
    if (sum == n) {
        return 1;
    }
    return 0;
}
int reverse(int num)
{
    int rem;
    static int sum = 0;
    if (num != 0)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        reverse(num / 10);
    }
    else
        return sum;
    return sum;
}
int isPalindrome(int n) 
{
    if (n== reverse(n))
    {
        return 1;
    }
    return 0;
}



