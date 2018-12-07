#include <stdio.h>
#include <malloc.h>
#define maxHeight 225 //define max height

typedef struct //define type struct
{
    int height;
    int weight;
} HeightWeight;

int main()
{
    HeightWeight *person1 = (HeightWeight *)malloc(sizeof(HeightWeight)); //memory allocate
    person1->weight = 80;                                                 //weight allocate
    person1->height = 230;                                                //height allocate

    printf("Weight: %i, Height %i: \n", person1->weight, person1->height);

    if (person1->height > maxHeight)
        printf("Height above the max! \n");
    else
        printf("Height below the max! \n");
    return 0;
}
