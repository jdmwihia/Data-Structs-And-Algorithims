#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 100

int main()
{
    int j=0;
    int i,total;
    int nums[MAX_NUM];
    int frequency[1000]={0};

    printf("Enter length of array: ");
   scanf("%d",&total);
   printf("\n");

   for(i=0; i<total; i++){
    printf("index[%d]: ",i);
    scanf("%d",&nums[i]);
   }

   for(i=0; i<total; i++){
    frequency[nums[i]]++;
   }

   for(i=0; i<total; i++){
    if (frequency[i]!=1){
        j++;
    }
    else{
        printf("The non-repeating number is %d",j);
    }

   }

    return 0;
}
