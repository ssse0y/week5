#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
   char c='0';
   int num=0;
   
   printf("input a string:");
   scanf("%c", &c);

   while ((c=getchar())!='\n') //�Է¹��ڰ� ���๮�ڰ� ���� ������ �ݺ� 
   //�ݺ����� ���� ���� �ϳ��ϳ� �˻� 
   {
   if(c>='0' && c <='9'){
   num=num+1;
   }
}
   printf("������ ������ %i �Դϴ�.\n", num );

   return 0;
}
