#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
 {
    int i,j;
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
             if(nums[i]+nums[j]==target)
             {
             int *arr=(int *)malloc(2*sizeof(int));
             arr[0]=i;
             arr[1]=j;
             *returnSize=2;
              return arr;
             }
        }
    }
         return NULL ;
}
