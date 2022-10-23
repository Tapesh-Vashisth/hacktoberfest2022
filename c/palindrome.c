#include<stdio.h>  
   int main()    
        {    
     int p,q,add=0,tem;    
      printf("enter the number:");    
      scanf("%d",&p);    
      tem=p;    
     while(p>0)    
     {    
       q=p%10;    
       add=(add*10)+q;    
       p=p/10;    
     }    
      if(tem==add)    
        printf("palindrome number ");    
     else    
        printf("not palindrome");   
     return 0;  
   
   }   
