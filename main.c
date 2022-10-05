#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
   char c='0';
   int num=0;
   
   printf("input a string:");
   scanf("%c", &c);

   while ((c=getchar())!='\n') //입력문자가 계행문자가 나올 때까지 반복 
   //반복문을 통해 문자 하나하나 검사 
   {
   if(c>='0' && c <='9'){
   num=num+1;
   }
}
   printf("숫자의 개수는 %i 입니다.\n", num );

   return 0;
}
