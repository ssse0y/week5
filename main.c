#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   
   int a,b,f;
   char t;
   
   printf("������ �����ڸ� �Է��ϼ���.:");
   scanf("%d %c %d",&a,&t,&b);
   
   switch(t)
   {
      case'+':
         f=a+b;
         break;
         
      case'-':
         f=a-b;
         break;
      
      case'/':
         f=a/b;
         break;
      
      case'*':
         f=a*b;
         break;
         
      default:
         f=a%b;
         break;
   }
   
   printf("=%d \n",f);
   
   return 0;
}
