#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n],sum;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[count]=arr[i];
            count++;
        }
    }
    for(int i=count;i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    
}