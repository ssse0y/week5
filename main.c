#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   
   int an=26, x=0, cnt=0;
   do
   {
   	
   	while(x!=an)
   	{
   		printf("���ڸ� �Է��ϼ���.:");
		scanf("%d",&x);
		cnt++;
		
		if (x>an){
		printf("���亸�� Ů�ϴ�.\n");
		}
      
      else if (x<an)
      {
      printf("���亸�� �۽��ϴ�\n"); 
	  }
	  
      else
      cnt++;
      continue;
      }
	  }
   while(x!=an);
   printf("�� %d�� �õ��߽��ϴ�.\n", cnt);
   
   return 0;
}
