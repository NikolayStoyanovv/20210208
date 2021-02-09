#include <stdio.h>
 
int *find_largest(int a[], int n)
{
    int i, x;
 
    x = 0;
    for (i = 0; i < 6; i++)
    {
        if (a[i] > x)
            x = a[i];
    }
 
    for (i = 0; i < 6; i++)
    {
        if (a[i] == x)
            return &a[i];
    }
}
 
 
int main()
{
    int b[6], i, *p;
    printf("Please enter 6 integers for array elements!!!:\n");
    for (i = 0; i < 6; i++)
        scanf("%d", &b[i]);
 
    p = find_largest(b,6);
 
    printf(" The largest element is: %d \n", *p);
 
    getchar();
    return 0;
}