#include <stdio.h>

int main()
{
    int arr[3][3]={
        {2,3,5},
        {7,4,9},
        {7,7,7}
    };
    int rows = sizeof(arr)/sizeof(arr[0]);
    int cols = sizeof(arr[0])/sizeof(arr[0][0]);

    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
