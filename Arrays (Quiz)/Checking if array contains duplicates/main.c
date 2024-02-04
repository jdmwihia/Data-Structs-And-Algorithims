#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 100

int main()
{
   int i,total;
   int nums[MAX_NUM];
   int frequency[100] = {0};

   printf("Enter length of array: ");
   scanf("%d",&total);
   printf("\n");

   for(i=0; i<total; i++){
    printf("index[%d]: ",i);
    scanf("%d",&nums[i]);
   }

   for(i=0; i<total; i++){
    if (frequency[nums[i]]>0){
        return 1;
    }
    else{
        frequency[nums[i]]++;
    }
   }

    return 0;
}
