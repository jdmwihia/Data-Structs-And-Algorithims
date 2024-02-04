#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 100

int main()
{
   int i,j,k,l,total;
   int nums[MAX_LENGTH];

   printf("Enter the length of the array: ");
   scanf("%d",&total);

   for(i=0;i<total;i++){
    printf("index[%d]: ",i);
    scanf("%d",&nums[i]);
   }

   printf("Enter number of times array should be rotated: ");
   scanf("%d",&l);

   printf("Original array:");
   for(i=0;i<total; i++){
    printf("%d ",nums[i]);
   }
   printf("\n");

    for (l; l>0; l--){
    int temp = nums[total-1];
    for (int j=total-2; j>=0; j--){
     nums[j+1]=nums[j];
     }
     nums[0]= temp;
    }

   printf("New array:");
   for(i=0;i<total; i++){
    printf("%d ",nums[i]);
   }

  return 0;
}
