#include <stdio.h>
int main() {
   int len=0;
   char a[10],b[10];
   scanf("%s",a);
   scanf("%s",b);
   for(int i=0;a[i]!='\0';i++)
   len++;
   for(int i=0;b[i]!='\0';i++)
   {
       a[len++]=b[i];
   }
   a[len]='\0';
   printf("%s",a);
}