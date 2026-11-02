#include <stdio.h>
int main(){

    int n,i,k = 1;
     printf("enter table value ");
    scanf("%d",&n);

    if( n < 0){
        printf("it is not possible to calculate the factorial");
    }
    else{
        for(i = 1; i <= n; i++){
        k = k*i;
        }
    printf("factorial = %d",k);
    
    return 0;
 }
}