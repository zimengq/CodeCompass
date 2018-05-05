

#include <stdio.h>

void thePrintf(int array[], int size)
{
    int i;

    for (i = 0;i < size;i++)
    {
        printf ("%d ", array[i]);
    }
    printf ("\r\n\r\n");
}

void maxHeapFilterDown (int array[], int index, int size)
{
    int dad, son, temp;

    dad = index;
    temp = array[dad];
    son = dad * 2 +1;
    while(son < size)
    {
        if (son + 1 < size && array[son + 1] > array[son])  //左右子节点中寻找较大键值
        {
            son++;
        }

        if (array[son] <= temp) //新的父节点值
        {
            break;
        }
        array[dad] = array[son];
        dad = son;
        son = dad * 2 + 1;
    }
    array[dad] = temp;
}

void buildMaxHeap (int array[], int size)
{
    int index;

    for (index = size / 2 - 1;index >= 0;index--)
    {
        maxHeapFilterDown (array, index, size);
    }
}

void heapSortInc (int array[], int size)
{
    int temp;
    int n;
    buildMaxHeap (array, size);
    for (n = size - 1;n >0;n--)
    {
    	temp = array[n];
        array[n] = array[0];
        array[0] = temp;
        maxHeapFilterDown (array, 0, n);
        
    }
}

int main (void)
{
    FILE *thisArray;
    int *array, size, i, value;
    char thisString[128];
    
    thisArray = fopen("randNums.txt", "rb");
    if (NULL == thisArray)
    {
        fprintf (stderr, "File Open Error.\r\n");
        return -1;
    }

    fscanf(thisArray, "%d", &size);
    array = (int *)malloc(size * sizeof(int));
    if (NULL == array)
    {
        fprintf (stderr, "Malloc Array Error.\r\n");
        return -1;
    }
    for (i = 0;i < size;i++)
    {
        fscanf (thisArray, "%d", &value);
        array[i] = value;
    }

    thePrintf(array, size);
    heapSortInc(array, size);
    thePrintf(array, size);
    free(array);
    getchar();
    return 0;
}
