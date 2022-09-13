#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int a[10000],i,s;
    for(i=0;i<10000;i++)
    { scanf("%d,",&a[i]);
     if(a[i]==NULL)
     {
         break;
     }
     else if(i==0&&(a[i]%2)!=0)
     {
         s=a[i]*a[i];
         printf("%d",s);
     }
       else if(a[i]%2!=0)
       {
         s=a[i]*a[i];
           printf(",%d",s);
       }
    }
    return 0;
}