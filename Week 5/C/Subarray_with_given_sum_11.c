// Not Solved Completely..Not Working
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// 5 12
// 1 2 3 7 5
int main() {
    int n,sum,check=0;
    scanf("%d %d",&n,&sum);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]<sum){
                for(int k=j+1;k<n;k++){
                    if(arr[i]+arr[j]+arr[k]==sum){
                        printf("%d %d",i+1,k+1); 
                        check=1;
                        break;
                    }
                }
            }
            else if(arr[i]+arr[j]==sum){
                printf("%d %d",i,j);
            }
            if (check){
                break;
            }
        }
        if(check){
            break;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
