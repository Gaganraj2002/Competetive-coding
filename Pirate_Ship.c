#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void trip(int gold,int pirates){
    if (gold>=pirates && gold+pirates<100){
        printf("true");
    }
    else{
        printf("false");
    }
}
int main() {
    int gold,pirates;
    scanf("%d %d",&gold,&pirates);
    trip(gold,pirates);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
