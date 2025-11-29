/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param nums int整型一维数组 
 * @param numsLen int nums数组长度
 * @return int整型
 */

int findPeakElement(int* nums, int numsLen ) {
    int i = 1;
    if(numsLen==1)
    {
        return 0;
    }
    if(numsLen==2)
    {
        if(nums[0]<nums[1])
        {
            return 1;
        }
        else {
        {
            return 0;
        }
        }
    }
    while(i<numsLen-1)
    {
    if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])
    {
        return i;
    }
    i++;
    }
    if(nums[numsLen-2]<nums[numsLen-1])
    {
        return numsLen-1;
    }
    if(nums[0]>nums[1])
    {
        return 0;
    }
    return -1;
}