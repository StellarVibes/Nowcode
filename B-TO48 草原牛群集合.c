int remove_cows(int* nums, int numsLen, int val ) {
    int count = 0;
    for(int i = 0;i<numsLen;i++)
    {
        if(nums[i]!=val)
        {
            count++;
        }
    }
    return count;
}