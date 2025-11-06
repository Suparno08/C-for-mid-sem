#include<stdio.h>
int main(){
    int n,size;
    printf("Enter the size of the array :\n");
    scanf("%d",&size);
    int arr[size];
    printf("---Enter Array Element---");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    
    for (int i = 0; i < size; i++)
    {
        if (max < arr [i])
        {
            max = arr [i];
        }
        
    }
    printf("Max value in the array is %d",max);
    
    
    
    return 0;
}
