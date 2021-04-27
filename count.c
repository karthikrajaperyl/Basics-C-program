// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char a[100];
    scanf("%s",a);
    int al=0;
    int d=0;
    int s=0;
    for(int i=0;i<strlen(a);i++)
    {
     if(isdigit(a[i]))
     d++;
     else if(isalpha(a[i]))
     al++;
     else
     s++;
    }
    printf("%d\n%d\n%d",d,al,s);
    return 0;
}