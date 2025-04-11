#include <stdio.h>

int main() {
    int num; 
    int n;
    scanf("%d%d",&num,&n);
    num ^= (1 << n);
    printf("%d",num);

    return 0;
}
