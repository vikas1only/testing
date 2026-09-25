#include<stdio.h>
int main(){
    int n,mid,low,high;
    printf("enter the number of element ");
    scanf("%d",&n);
   int a[n];
    for(int i=0;i<n;i++)
     { printf("enter the value in the array ");
       scanf("%d", &a[i]);
    } 
       int i=0;
       printf("array is :\n");
       while(i<n)
      { 
        printf("%d ",a[i]);
        i++;}
      int search;
      printf("\nenter the value to be searched ");
      scanf("%d",&search);
      low=0;
      high=n-1;
      int count=0;
      while(low<=high)
      {
        mid=(low+high)/2;
        if(a[mid]==search){
          printf("the vlaue found the index is %d and the value is%d ",mid,a[mid]);
          count++;
          break;}
        else if(a[mid]<search){
            low=mid+1;  }
        else{
            high=mid-1;}
        }
        if(count==0){
          printf("the value is not found in the array ");
        }
    return 0;
}
