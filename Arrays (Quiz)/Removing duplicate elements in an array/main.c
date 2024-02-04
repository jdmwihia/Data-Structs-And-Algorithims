#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 100

int main()
{
    int i,j,k,total;
    int nums[MAX_NUM];

   printf("Enter length of array: ");
   scanf("%d",&total);
   printf("\n");

   for(i=0; i<total; i++){
    printf("index[%d]: ",i);
    scanf("%d",&nums[i]);
   }

   printf("Original array:");
    for(i=0; i<total; i++){
     printf("%d ",nums[i]);
    }
    printf("\n");

   for (i=0; i<total; i++){
    for (j=i+1; j<total; j++){
        if (nums[i]==nums[j]){
            for(k=j; k<total-1; k++){
                nums[k]=nums[k+1];
            }
            total--;
            j--;
        }
    }
   }

   printf("New array:");
   for (i=0; i<total; i++){
    printf("%d ", nums[i]);
   }
   return 0;
}
