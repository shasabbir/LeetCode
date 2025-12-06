#include <stdio.h>
#define N 5
int main(){
    int a[N], *p;
    printf("Enter elements: \n");
    for ( p=a; p < a+N; p++)
    {
        scanf("%d",p);
    }
    int len=sizeof(a)/sizeof(a[0]);
    printf("\nlen=%d \n",len);
    for ( p=a+N-1; p >=a; p--)
    {
        printf("%d ",*p);
    }
    return 0;
    
}