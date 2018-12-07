#include <stdio.h>

int main()
{
    int x = 25; //current value
    int *y = &x; //y receives address of x
    *y = 30; //*y pointer (memory) to x and update the current value

    printf("Current value of x: %i \n", x);
    return 0;
}
