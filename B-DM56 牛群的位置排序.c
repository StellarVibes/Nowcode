int searchInsert(int* labels, int labelsLen, int target ) {
    for(int i = 0;i<labelsLen;i++)
    {
        if(labels[i]>=target)
        {
            return i;
        }
    }
    return labelsLen;
}