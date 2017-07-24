#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    int j = 0;
    int length = 0;

   // length = numsSize;

    for(i = 0; i < numsSize;i++)
    {
        for(j = i + 1; j < numsSize; j++)
        {
            if(nums[i] == nums[j])
            {
                break;
            }
        }
        if(j == numsSize)
        {
            length++;
        }
    }

    return length;
}
int main()
{
    printf("This is demo of Remove Duplicates from Sorted Array!\n");
    int length = 0;
    int data[5] = {1,2,4,4,4};
    length = removeDuplicates(data,5);
    printf("The length is %d\n", length);

    return 0;
}
