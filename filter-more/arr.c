#include <stdio.h>
#include <math.h>

int main(void)
{
    int arr[3] = {5,6,7};
    int *copy[3];

  copy[0] = &arr[0];


printf("%p\n",copy[0]);
printf("%p\n",&arr[0]);

printf("%i\n",*copy[0]);
printf("%i\n",arr[0]);

}
