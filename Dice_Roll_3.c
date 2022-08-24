#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int roll(int a,int b){
    if (a==b){
        return 2*(a+b);
    }
    else{
        return a+b;
    }
}
int main() {
    int a,b,rolled;
    scanf("%d %d",&a,&b);
    rolled=roll(a,b);
    printf("%d",rolled);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
