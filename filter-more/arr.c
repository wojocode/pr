#include <stdio.h>
#include <math.h>

int main(void)
{
    int arr[3][3];
    int q = 1;

    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 3; j++)
        {

            arr[i][j] = q;
            q++;
        }

    }
    int a = 0;
    int b = 0;

    arr[a-1][b]= -3;


   int x = round(pow(2,4));
   printf("%i\n",x);
}
