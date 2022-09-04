#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>

int convert(int n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
  return dec;}

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
  int arr[length],new_len=0;
  
  for(int i=0;i<length;i++) 
  { 
    if (convert(array[i])%5==0){
            arr[new_len]=array[i];
            new_len+=1;
        } 
  }
  for(int i=0;i<new_len;i++){
      if (i!=new_len-1)
       printf("%d,",arr[i]);
        else
            printf("%d",arr[i]);
  }
} 