#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
int main() {
  int n;
  scanf("%d",&n);
  int count[26];
  for(int i=0;i<26;i++)
  count[i]=0;
  for(int i=0;i<n;i++){
  char a[10];
  scanf("%s",a);
   for(int i=0;i<strlen(a);i++)
   count[a[i]-'a']++;
  }
  bool flag=true;
  for(int i=0;i<26;i++)
  {
      if(count[i]%n!=0)
      {
          flag=false;
          break;
      }
  }
   if(flag==true)
    printf("1");
    else
    printf("0");
    return 0;
}