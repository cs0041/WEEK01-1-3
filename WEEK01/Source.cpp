#include <stdio.h>
#include <stdlib.h>
void Star()
{
    printf("*");
}
void Space()
{
    printf(" ");
}
int abs(int x)
{
    if (x < 0)
    {
        return x * -1;
    }
    else if (x >= 0)
    {
        return x;
    }
}
int main()
{
    int a, b;
    bool go = false;
    while (!go)
    {
        scanf_s("%d", &a);
        scanf_s("%d", &b);
        if (a <= 0 || b <= 0)
        {
            printf("!!!ERROR!!!\n");
            a = 0;
            b = 0;
        }
        else
        {
            go = true;
        }
    }
    int row;
    int num = 0;
    int cheack = 0;
    row = (b - 1) + ((a * 2) - 1) * b;
    for (int i = 0; i < abs((row + 1) / 2); i++)
    {
        if (i == a + (num * a))
        {

        }
        else
        {
            for (int j = 0; j < abs(((((row + 1) / 2)) - i) - 1); j++)
            {
                Space();
            }
        }
        if (i == a + (num * a))
        {
            num += 1;
            cheack = 1;
            for (int rowa = 0; rowa < a; rowa++)
            {
                for (int j = 0; j < abs(((((row + 1) / 2)) - i) - 1); j++)
                {
                    Space();
                }
                for (int all = 0; all < abs(num + 1); all++)
                {
                    for (int s = 0; s < abs((rowa * 2) + 1); s++)
                    {
                        Star();
                    }
                    for (int sx = 0; sx < abs(((a * 2) - 1) - (rowa * 2)); sx++)
                    {
                        Space();
                    }
                }
                printf("\n");
                 i++;
            }
            i--;
        }
        if (cheack == 1)
        {

        }
        else
        {
            for (int s = 0; s < abs((i * 2) + 1); s++)
            {
                Star();
            }
            printf("\n");
        }
    }
    return 0;
}
