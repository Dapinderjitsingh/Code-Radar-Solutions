#include<stdio.h>
int main(){
    int a,n,result;
    scanf("%d%d",&a,&n);
    a &= ~(1<<n);
    printf("%d",a);
return 0;
}