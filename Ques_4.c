#include <stdio.h>

int main()
{
    int q[3] = {10, 20, 30};
    int p[3] = {2, 1, 3};

    
    if (p[0] < p[1] && p[0] < p[2])
    {
        printf("Deleted: %d\n", q[0]);
    }
    else if (p[1] < p[0] && p[1] < p[2])
    {
        printf("Deleted: %d\n", q[1]);
    }
    else
    {
        printf("Deleted: %d\n", q[2]);
    }

    
    printf("Remaining elements:\n");
    printf("10 - Priority 2\n");
    printf("30 - Priority 3\n");

    return 0;
}