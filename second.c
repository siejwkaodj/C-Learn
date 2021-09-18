//두 번째...while문 이용
#include <stdio.h>

int main(void)
{
   int a;
   int i, j;
   int enter=0;

   printf("2 이상의 정수를 입력하시오 : ");
   scanf("%d", &a);
   
   for (i = 2; i <= a; i++)
   {
      j = 2;
      while(j < i && (i%j != 0)){
        j++;
      }  
      if(j == i){
        printf("%5d", i);
        enter++;
        if (enter % 5 == 0)
          printf("\n");
      }
   }

   return 0;
}
