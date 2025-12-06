#include <stdio.h>

int main(){
    int arr[2][2];
    int rs[2],cs[2];
    int r_sum_count=0,c_sum_count=0;;
    for(int i=0;i<2;i++){
        printf("Enter row number %d: ",i+1);
        for(int j=0;j<2;j++){
        scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<2;i++){
        r_sum_count=0;
        for(int j=0;j<2;j++){
        r_sum_count+=arr[i][j];
        }
        rs[i] = r_sum_count;
    }
    
    for(int i=0;i<2;i++){
        c_sum_count=0;
        for(int j=0;j<2;j++){
        c_sum_count+=arr[j][i];
        }
        cs[i] = c_sum_count;
    }
    printf("Row sums are: ");
    for(int i=0;i<2;i++){
        printf("%d ",rs[i]);
    }
    printf("\nColumn sums are: ");
    for(int i=0;i<2;i++){
        printf("%d ",cs[i]);
    }
    printf("\n");
    
    // int n, i;
    // printf("Enter the number of elements: ");
    // scanf("%d", &n);
    
    // int arr[n];
    // printf("Enter %d integers:\n", n);
    // for(i = 0; i < n; i++){
    //     scanf("%d", &arr[i]);
    // }
    
    // printf("The elements in the array are:\n");
    // for(i = 0; i < n; i++){
    //     printf("%d ", arr[i]);
    //}
    
    return 0;
}