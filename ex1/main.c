#include <stdio.h>
#include "NumClass.h"
int main()
{
    int n1,n2,i ,temp;
    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n2<n1){
        temp = n2;
        n2 =n1;
        n1 =temp;
    }
    printf("The Armstrong numbers are:");
    for(i=n1;i<=n2;i++){
        if(isArmstrong(i)){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for(i=n1;i<=n2;i++){
        if(isPalindrome(i)){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    for(i=n1;i<=n2;i++){
        if(isPrime(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    for(i=n1;i<=n2;i++){
        if(isStrong(i)){
            printf(" %d",i);
        }
    }

    printf("\n");
    return 0;
}