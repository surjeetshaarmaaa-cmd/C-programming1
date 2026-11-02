#include <stdio.h>
int main(){

    int a = 1,i,c;
    printf("enter table value ");
    scanf("%d",&a);
    for( i = 0; i <= 10; i++){
        c = a*i;
        printf(" %d*%d = %d\n",a,i,c);
    }
    return 0;
}