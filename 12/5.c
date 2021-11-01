#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define NUM 100
int main(int argc, char const *argv[])
{
    int array[100], temp = 0;
    time_t t;
    srand((unsigned)time(&t));
    for (int i = 0; i < NUM; i++)
    {
        array[i] = rand() % 10;
    }
    for (int i = 0; i < NUM; i++)
    {
        for (int j = 0; j < NUM - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < NUM; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
