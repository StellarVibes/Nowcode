int* temperatures(int* dailyTemperatures, int dailyTemperaturesLen, int* returnSize ) {
    int * arr = (int*)malloc(sizeof(4)*(dailyTemperaturesLen+1));
    *returnSize=dailyTemperaturesLen;
    int i = 0;
    while(i<dailyTemperaturesLen)
    {
        int count = 1;
        int flag = 0;
        while(dailyTemperatures[i]>=dailyTemperatures[i+count])
        {
            count++;
            flag = 1;
            if(i+count>=dailyTemperaturesLen)
            {
                arr[i++]=0;
                flag = 0;
                break;
            }
        }
        if(count>=0&&flag)
        {
            arr[i++]=count;
            //printf("%d\n",arr[i-1]);
            count--;
        }
        if(i>=dailyTemperaturesLen)
        {
            break;
        }
        if(dailyTemperatures[i]<dailyTemperatures[i+1]&&i+1<dailyTemperaturesLen)
        {
            arr[i++]=1;
            if(i==dailyTemperaturesLen-1)
            {
                arr[i]=0;
                break;
            }
        }
    }
    return arr;
}