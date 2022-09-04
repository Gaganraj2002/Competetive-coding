//48-57,65-90,97-122
#include <stdio.h>
#include <string.h>

int main() {  
    char c[1024];
    scanf("%[^\n]", c);  
    int len =strlen(c),alpha_count=0,num_count=0;
    for (int i =0;i<=len;i++){
        
        if ((c[i]-48)*(c[i]-57) <= 0){
        num_count+=1;}
        else if ((c[i]-65)*(c[i]-90) <= 0){
        alpha_count+=1;}
        else if ((c[i]-97)*(c[i]-122) <= 0){
        alpha_count+=1;}
    }
    printf("LETTERS %d\nDIGITS %d",alpha_count,num_count);
    return 0;
}
