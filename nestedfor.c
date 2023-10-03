#include<stdio.h>

int main()
{
    int i, j;

  // Outer loop
  for(i=1;i<=2;++i){
    printf("outer:%d \n",i);

 //inner loop
    for(j=1;j<=3;++j){
        printf("inner: %d\n",j);
    }
  }
}
