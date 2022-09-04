#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
 
int main() 
{ 
  int array[1024]; 
  int length=0; 
  char buffer[1024]; 
  char *aux; 
  fgets(buffer,1023,stdin); 
  aux=strtok(buffer, ","); 
  while(aux) 
  { 
  array[length]=atoi(aux); 
  length++; 
  aux=strtok(NULL, ","); 
  } 
  for(int i=0;i<length;i++) 
  { 
    if (array[i]%2!=0){
        if (i!=length-1)
   printf("%d,",array[i]*array[i]);
        else
            printf("%d",array[i]*array[i]);
    } 
  } 
} 