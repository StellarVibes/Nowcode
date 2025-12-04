int* rotateCows(int* nums, int numsLen, int k, int* returnSize ) {
    * returnSize=numsLen;
    k%=numsLen;
    int left = numsLen-k;
    int right = numsLen-1;
    while(left<right)
    {
        int tmp = nums[left];
        nums[left] = nums[right];
        nums[right]=tmp;
        left++;
        right--;
    }
    left = 0;
    right = numsLen-k-1;
    while(left<right)
    {
        int tmp = nums[left];
        nums[left] = nums[right];
        nums[right]=tmp;
        left++;
        right--;
    }
    left = 0;
    right = numsLen-1;
    while(left<right)
    {
        int tmp = nums[left];
        nums[left] = nums[right];
        nums[right]=tmp;
        left++;
        right--;
    }
    return nums;
}