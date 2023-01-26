int insert(int myarr[], int size, int element, int capacity, int index){
    if (size>=capacity)
    {
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        myarr[i+1]= myarr[i];
    }
    myarr[index]= element;
    return 1;
}