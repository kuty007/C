#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int isArmstrong(int n) 
{
    int onum;
    int count = 0, temp;
    temp = n;
    while (temp != 0)
    {
        count = count + 1;
        temp = temp / 10;
    }
    onum = n;
    int sum = 0;
    int digit;
    while (onum > 0) {
        digit = onum % 10;
        sum += pow(digit, count );
        onum=onum / 10;
    }
    if (sum == n) {
        return 1;
    }
    return 0;
}
int isPalindrome(int n) 
{
    int onum = n;
    int reverse = 0, temp;

    while (onum > 0) {
        temp = onum % 10;
        reverse = (reverse * 10) + temp;
        onum = onum / 10;
    }
    if (reverse == n) {
        return 1;
    }
    return 0;
}
