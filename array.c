#include <stdio.h>

void arrayAdd(int arr[], int n, int s)
{
 
    int i;
    for (i = 0; i < 100; i++)
        arr[i] = arr[i] + n;  
    for (i = 0; i <= s; i++)
         printf("%d \n", arr[i]);  
 
}

int main()
    {
 
        int i;
        int n = 4;
        int s = 10;
        int arr[100];
        
        for (int i = 0; i < 100; i++)
        {
            arr[i] = i*i;
        }
        
        arrayAdd(arr, n, s);

 
    }
