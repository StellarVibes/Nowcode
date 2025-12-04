int majority_cow(int* nums, int numsLen ) {
    int arr[50]={0};
    for(int i = 0;i<numsLen;i++)
    {
        arr[nums[i]+10]++;
    }
    for(int i = 0;i<50;i++)
    {
        printf("%d ",arr[i]);
        if(arr[i]>numsLen/2)
        {
            return i-10;
        }
    }
    
    return 0;
}