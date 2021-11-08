#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int isArmstrong(int n) 
{
    int onum = n;
    int digtcunt = floor(log10(n) + 1);
    onum = n;
    int sum = 0;
    int digit;
    while (onum > 0) {
        digit = onum % 10;
        sum += pow(digit, digtcunt);
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
        reverse = reverse * 10 + temp;
        onum /= 10;
    }
    if (reverse == n) {
        return 1;
    }
    return 0;
}
