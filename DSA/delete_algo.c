int delete(int myarr2[], int size, int capacity, int index){
    if (size>=capacity)
    {
        return -1;
    }
    for (int i = index; i < size-1; i++)
    {
        myarr2[i]= myarr2[i+1];
    }
    return 1;
}