#include<stdio.h>
int main(){
    int n,a[100],i,sum,j,c,k=0;
    scanf("%d %d",&n,&sum);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=k;i<n;i++){
        c=0;
        for(j=i;j<n;j++){
            c=c+a[j];
            if (c==sum){
                printf("%d %d",i+1,j+1);
                break;
                }
            }
        k++;
        if(c==sum)
            break;
}
    return 0;
}