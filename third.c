//세 번째...재귀함수 이용(재귀함수 자체가 어려운 내용임)
#include <stdio.h>

int assess(int i, int k){
  if(k==1)
    return 0;
  else if(i % k == 0)
    return 1;
  else
    return assess(i, k-1);
}

int main(void)
{
   int a;
   int i, j;
   int enter=0;

   printf("2 이상의 정수를 입력하시오 : ");
   scanf("%d", &a);
   for(i = 2; i <= a; i++){
      if(assess(i, i-1) == 0){
          printf("%5d", i);
          enter++;
          if (enter % 5 == 0)
            printf("\n");
      }
   }

   return 0;
}