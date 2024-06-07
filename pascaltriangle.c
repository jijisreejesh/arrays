#include<stdio.h>
void main(){
    int i,k,n,j,a,s,d;
    printf("Enter the number of levels : ");
    scanf("%d",&n);
    a=n;d=1;s=1;
    for(i=1;i<=n;i++){
        for(j=0;j<a;j++){
            printf("\t");
        }
       for(k=1;k<=d;k++){
             printf("%d\t",s);
             if(k>=i){
               s--;
             }
             else{
                s++;
             }
            
       }
            d=d+2;
            s=1;
            a--;
            printf("\n");
    }
}