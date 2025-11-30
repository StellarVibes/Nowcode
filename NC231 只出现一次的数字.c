int singleNumber(int* nums, int numsLen ) {
    int a = 0;
    for(int i = 0;i<numsLen;i++)
    {
        a^=nums[i];
    }
    return a;
}