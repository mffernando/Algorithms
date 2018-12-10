#include <stdio.h>

#define MAX 50

//type definition
typedef int KEYTYPE;

typedef struct
{
    KEYTYPE key;
} REGISTER;

typedef struct
{
    REGISTER A[MAX+1]; //MAX+1 = sentry
    int elements;
} LIST;

//initialize list
void Initialize(LIST *list)
{
    list->elements = 0;
};

//return list size
int Size(LIST *list)
{
    return list->elements;
};

//show list
void Show(LIST *list)
{
    int i;
    printf("List: \" ");
    for (i = 0; i < list->elements; i++)
        printf("%i ", list->A[i].key);
    printf("\"\n");
};

//sequential search
int Search(LIST *list, KEYTYPE key)
{
    int i = 0;
    while (i < list->elements)
    {
        if (key == list->A[i].key)
            return i;
        else
            i++;
    }
    return -1;
};

//insert element
bool Insert(LIST *list, REGISTER reg, int i)
{
    int j;
    if ((list->elements == MAX) || (i < 0) || (i > list->elements))
        return false;
    for (j = list->elements; j > i; j--)
        list->A[j] = list->A[j - 1];
    list->A[i] = reg;
    list->elements++;
    return true;
};

//delete element
bool Delete(KEYTYPE key, LIST *list)
{
    int position, j;
    position = Search(list, key);
    if (position == -1)
        return false;
    for (j = position; j < list->elements - 1; j++)
        list->A[j] = list->A[j + 1];
    list->elements--;
    return true;
};

//reinitialize list
void Reinitialize(LIST *list)
{
    list->elements = 0;
};

//search using sentry
int Sentry(LIST *list, KEYTYPE key)
{
    int i = 0;
    list->A[list->elements].key = key; //sentry
    while (list->A[i].key != key)
        i++;
    if (i == list->elements)
        return -1;
    else
        return i;
};