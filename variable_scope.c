#include <stdio.h>

int globalValue = 100;

void display()
{
    int localValue = 50;

    printf("Inside function:\n");
    printf("Global Value = %d\n", globalValue);
    printf("Local Value = %d\n", localValue);
}

int main()
{
    int localValue = 20;

    printf("Inside main:\n");
    printf("Global Value = %d\n", globalValue);
    printf("Local Value = %d\n", localValue);

    display();

    return 0;
}
