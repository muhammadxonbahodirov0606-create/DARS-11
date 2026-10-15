#include <stdio.h>

int eng_katta_raqam(long long son)
{
    int eng_katta = 0;

    while (son != 0)
    {
        int raqam = (int)(son % 10);
        if (raqam < 0)
        {
            raqam = -raqam;
        }
        if (raqam > eng_katta)
        {
            eng_katta = raqam;
        }
        son /= 10;
    }

    return eng_katta;
}

int main(void)
{
    long long son;

    if (scanf("%lld", &son) != 1)
    {
        return 1;
    }

    printf("%d\n", eng_katta_raqam(son));
    return 0;
}