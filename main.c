#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   
   int an=26, x=0, cnt=0;
   do
   {
   	
   	while(x!=an)
   	{
   		printf("숫자를 입력하세요.:");
		scanf("%d",&x);
		cnt++;
		
		if (x>an){
		printf("정답보다 큽니다.\n");
		}
      
      else if (x<an)
      {
      printf("정답보다 작습니다\n"); 
	  }
	  
      else
      cnt++;
      continue;
      }
	  }
   while(x!=an);
   printf("총 %d번 시도했습니다.\n", cnt);
   
   return 0;
}
