// Frequency of elements in an array
#include<stdio.h>
int main()
{
    int n;
    int co=0;
    printf ("enter the number of elements in the array");
    scanf("%d",&n);
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
        printf("enter the value which are in array ");
        scanf("%d",&a[i]); }
    for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
     }
     printf("\n");
    for(int i=0;i<n;i++){
        count=0;
        for(int z=0;z<n;z++){
            if(a[i]==a[z]){
                count++;
            }
        }
        if(i<n){
        
        printf("the frequency of %d is %d \n",a[i],count);
         }
        
        }
    }
    

    
