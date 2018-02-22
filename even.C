#include <stdio.h>

int main() 

{

        int start,end,i=0;

        printf("enter the  starting number:");

        scanf("%d",&start);

        printf("enter the ending number:");

         scanf("%d",&end);

        for(i=start+1;i<=end;i++)

   {

    if(i%2==0)
   {

    printf("%d",i);
   }

   }
}
 
