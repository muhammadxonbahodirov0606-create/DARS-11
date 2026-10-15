#include <stdio.h>

int main()
{
    FILE *f = fopen("sonlar.txt", "r");
    int son, yigindi = 0;

    if (f == NULL)
    {
        printf("Fayl ochilmadi!");
        return 1;
    }

    while (fscanf(f, "%d", &son) == 1)
    {
        yigindi += son;
    }

    fclose(f);

    printf("Yigindi: %d\n", yigindi);

    return 0;
}