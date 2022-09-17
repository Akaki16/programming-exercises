#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ARR_SIZE(arr) ( sizeof((arr)) / sizeof((arr[0])) )

typedef char* string;

typedef struct
{
    int *array;
    size_t used;
    size_t size;
}
Array;

void initArray(Array *a, size_t initialSize);
void insertArray(Array *a, string element);

int main()
{
    char name[100];
    printf("Enter a name: ");
    fgets(name, 100, stdin);

    if (strlen(name) != 0)
    {
        printf("empty\n");
    }

    return 0;
}

void initArray(Array *a, size_t initialSize)
{
    a->array = malloc(initialSize * sizeof(int));
    a->used = 0;
    a->size = initialSize;
}

void insertArray(Array *a, string element)
{
    if (a->used == a->size) {
        a->size *= 2;
        a->array = realloc(a->array, a->size * sizeof(int));
    }
    a->array[a->used++] = *element;
}