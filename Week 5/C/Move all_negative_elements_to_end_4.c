#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,count_neg=0,count_pos=0;
    scanf("%d",&n);
    int arr[n],neg_arr[n],pos_arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    for(int i = 0;i<n;i++){
        if (arr[i]<0){
            
            neg_arr[count_neg]=arr[i];
            count_neg+=1;
        }
        else{
            pos_arr[count_pos]=arr[i];
            count_pos+=1;
        }
    }

    for(int i=0;i<count_pos;i++){
        printf("%d ",pos_arr[i]);
    }

    for(int i=0;i<count_neg;i++){
        printf("%d ",neg_arr[i]);
        
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
