//No Seven
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int test = i,flag=0;
        while(test!=0){
            int remainder=test%10;
            if (remainder==7){
                flag=1;
            }
            test/=10;
        }
        if (i%7!=0 && flag!=1){
            printf("%d ",i);
        }
    }
    return 0;
}
