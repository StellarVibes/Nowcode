int GetNumberOfK(int* nums, int numsLen, int k ) {
    int count = 0;
    for(int i = 0;i<numsLen;i++)
    {
         if(nums[i]==k)
         {
            count++;
         }
    }
    return count;
}