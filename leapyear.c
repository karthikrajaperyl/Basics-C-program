#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    if((n%100!=0) && (n%4==0) ||(n%400==0) && (n%4==0))
    printf("Leap year");
    else
    printf("Non Leap Year");
    return 0;
}