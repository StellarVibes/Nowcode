int* moveZeroes(int* nums, int numsLen, int* returnSize ) {
    int * arr = (int*)malloc(sizeof(4)*(numsLen+1));
    *returnSize=numsLen;
    int count= 0;
    for(int i = 0;i<numsLen;i++)
    {
        if(nums[i]!=0)
        {
            arr[count++]=nums[i];
        }
        
    }
    for(int i = count;i<numsLen;i++)
    {
        arr[count++]=0; 
    }
    return arr;
}