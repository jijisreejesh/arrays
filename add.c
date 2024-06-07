#include<stdio.h>
int main()
{
	int r,a,b;
    float areac;
  printf("Enter the length and breadth of rectangle : \n");
  scanf("%d%d",&a,&b);
  printf("\nArea of rectangle : %d\n",a*b);
   printf("Enter the radius of circle : \n");
  scanf("%d",&r);
  areac=3.14*r*r;
    printf("\nArea of circle : %f",areac);
   
    return 0;
}