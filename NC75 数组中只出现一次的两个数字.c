int* FindNumsAppearOnce(int* nums, int numsLen, int* returnSize ) {
    *returnSize=2;
    int* arr = (int*)malloc(sizeof(int)*2);
    int tmp[1000000]={0};
    for(int i = 0;i<numsLen;i++)
    {
        tmp[nums[i]]++;
    }
    int count = 0;
    for(int i = 0;i<1000000;i++)
    {
        if(tmp[i]==1)
        {
            arr[count++]=i;
        }
    }
    return arr;
}