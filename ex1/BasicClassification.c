#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int isPrime(int n) {
    if (n == 2 || n == 1) {
        return 1;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int fact(int r) {
    if (r==0){
      return 0;
    }
    int mul = 1;
    for (int i = 2; i <= r; i++) {
        mul = mul * i;
    }
    return mul;
}

int isStrong(int n) {
    int onum = n;
    int temp = 0, num;
    while (onum > 0) {
        num = onum % 10;
        temp += fact(num);
        onum /= 10;
    }
    if (temp == n) {
        return 1;
    }
    return 0;
}
