#include<stdio.h>
int main(){
    printf("Enter the total number of elements: ");
    int n;
    scanf("%d",&n);
    int A[n];
    printf("Enter the Elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("You entered the following: \n");
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("Enter the location where you want to remove the data: ");
    int k;
    scanf("%d",&k);
    for(int i=k-1;i<=n;i++)
        A[i]=A[i+1];
    printf("The resulting array: \n");
    for(int i=0;i<n-1;i++)
        printf("%d ",A[i]);
}
