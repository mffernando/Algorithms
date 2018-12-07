#include <stdio.h>
#include <malloc.h>

int main()
{
    int *y = (int*) malloc(sizeof(int)); //allocate memory address and cast to an integer
    *y = 20; //pointer *y receives 20
    int z = sizeof(int); //return sizeof (32bits = 4 bytes or 64bits = 8bytes)

    printf("*y=%i z=%i \n", *y, z);
    return 0;
}
