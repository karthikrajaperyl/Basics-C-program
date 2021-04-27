
#include <stdio.h>
int main() {
    // Write C code here
  int a,b;
  scanf("%d%d",&a,&b);
  int max=1;
  while(1)
  {
      if(max%a==0 && max%b==0){
      printf("The lcm of two number is %d",max);
      break;
  }
  max++;
  }
    return 0;
}