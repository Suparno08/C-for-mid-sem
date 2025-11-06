#include<stdio.h>
int main(){
    int n,multiply=1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        multiply=multiply*i;
    }
    printf("the factorial is %d",multiply);
    
    return 0;
}