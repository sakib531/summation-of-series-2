#include<stdio.h>

int main(){
    int a,n,sum=1;
    printf("enter the value : \n");
    scanf("%d" ,&n);
    for(a=1;a<=n;a++){
        sum = sum*(a*(a+1)/2);
    }
    printf("the value of the summation : %d  \n",sum);
    return 0;
}
