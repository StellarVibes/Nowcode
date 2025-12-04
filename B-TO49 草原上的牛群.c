int remove_duplicates(int* nums, int numsLen ) {
    int arr[201]={0};
    for(int i = 0;i<numsLen;i++)
    {
        arr[nums[i]]++;
    }
    int count = 0;
    for(int i = 0;i<201;i++)
    {
        if(arr[i]!=0)
        {
            count++;
        }
    }
    return count;
}