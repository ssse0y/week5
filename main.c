#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   int sum = 0;
   int x,i;
   
   printf("������ �Է��ϼ���.:");
   scanf("%d", &x);
   
   for (i=0; i<=x; i++)
   sum= sum+i;
      
   printf("����� %i �Դϴ�.",sum); 
   return 0;
}
