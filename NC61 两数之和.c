/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param numbers int整型一维数组 
 * @param numbersLen int numbers数组长度
 * @param target int整型 
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
 */

int* twoSum(int* numbers, int numbersLen, int target, int* returnSize ) {
    * returnSize=2;
    int* arr=(int*)malloc(sizeof(int)*2);
    for(int i = 0;i<numbersLen;i++)
    {
        if(numbers[i]>target+10) continue;
        int n = target-numbers[i];
        int m = i+1;
        while(1)
        {
            if(numbers[m]==n)
            {
                arr[0]=i+1;
                arr[1]=m+1;
                return arr;
            }
            m++;
            if(m==numbersLen)
            {
                break;
            }
        }
    }
    
    return 0;
}