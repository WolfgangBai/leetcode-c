int *twoSum(int *nums, int numsSize, int target)
{
    if (nums == NULL || numsSize <=2) {
        return  NULL;
    }
    int i,j;
    int *p;
    for (i = 0; i < numsSize; i++) {
        for (j = i +1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                p = (int *)malloc(sizeof(int)*2);
                p[0]= i;
                p[1]= j;
                return p;
                
            }
        }
    }
    return NULL;
}