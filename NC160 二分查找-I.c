int search(int* nums, int numsLen, int target ) {
    if(nums[0]==target&&numsLen==1)
    {
        return 0;
    }
    int left = -1;
    int right = numsLen;
    while(left<right)
    {
        int mid = (left+right)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]<target)
        {
            left = mid;
        }
        else 
        {
            right = mid;
        }
        if(left+1==right)
        {
            return -1;
        }
    }
    return -1;
}