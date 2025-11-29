/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param n int整型 
 * @return int整型
 */

int NumberOf1(int n ) {
    int a = 1;
    int count = 0;
    for(int i = 0;i<32;i++)
    {
        if(n & (a<<i))
        {
            count++;
        }
    }
    return count;
}