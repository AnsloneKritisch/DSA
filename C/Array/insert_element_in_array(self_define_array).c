#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[5] = {1, 2, 3, 5, 6};
    int index = 3;
    int element = 4;
    int narr[7];

    for (int i = 0; i < index; i++)
    {
        narr[i] = arr[i];
    }

    narr[index] = element;

    for (int i = index; i < 5; i++)
    {
        narr[i + 1] = arr[i];
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", narr[i]);
    }

    getch();
    return 0;
}



