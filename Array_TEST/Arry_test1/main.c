#include <stdio.h>
#include <stdlib.h>

int* twosum(int* nums,int numsize, int target)
{
    int i = 0;
    int *p = (int *)malloc(sizeof(int));
    int j = 0;

    for(i = 0; i < numsize; i++)
    {
        for(j = i+1; j<numsize; j++)
        {
            if((nums[i] + nums[j]) == target)
            {
                *p = nums[i];
                *(p + 1) = nums[j];
            }
        }
    }

    return p;
}

int main()
{
    printf("This is Array test1 for LetCode!\n");
    int num[4] = {1,2,3,4};
    int target = 4;
    int *p = NULL;

    p = twosum(num,4,4);

    printf("NUM is %d , %d\n",*p,*(p+1));

    return 0;
}
