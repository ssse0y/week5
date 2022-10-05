#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   int sum = 0;
   int x,i;
   
   printf("정수를 입력하세요.:");
   scanf("%d", &x);
   
   for (i=0; i<=x; i++)
   sum= sum+i;
      
   printf("결과는 %i 입니다.",sum); 
   return 0;
}
