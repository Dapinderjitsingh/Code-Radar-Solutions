#include<stdio.h>
int main(){
    int a,n,result;
    scanf("%d%d",&a,&n);
    result=(a>>n) & 1;
    if(result==1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}