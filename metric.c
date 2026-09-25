#include"stdio.h"
int main(){
    int a[2][2],b[2][2],i,j;
    int result[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
        { printf("enter a numnber for metric a ");
          scanf("%d",&a[i][j]);
          printf("enter a number for metric b ");
          scanf("%d",&b[i][j]);}
        }
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(i==0){
               if(j==0){
                  printf("["); }
            }
            printf("%d ",a[i][j]);}
        printf("]\n");
      
    
           
        }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            result[i][j]=a[i][j]+b[i][j];    
        }}
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",result[i][j]);
            
        }

    }
}
         
