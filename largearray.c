//largest element in matrix
#include<stdio.h>
void main(){
    int a,b,n[10][10],i,j,l=0;;
    printf("Enter the order of matrix : \n");
    scanf("%d%d",&a,&b);
    printf("Enter the matrix : ");
    for(i=0;i<a;i++)
    for(j=0;j<b;j++)
    {
        scanf("%d",&n[i][j]);
        if(l<n[i][j]){
            l=n[i][j];
        }
       
    }
     printf("Largest number in matrix : %d",l);
    }
    