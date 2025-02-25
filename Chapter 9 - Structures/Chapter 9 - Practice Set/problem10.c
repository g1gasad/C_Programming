#include <stdio.h>

typedef struct Date
{
    int dd;
    int mm;
    int yyyy;
} dt;

int Compare(dt d1, dt d2)
{
    int result;
    if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yyyy == d2.yyyy)
    {
        return 0;
    }
    else
    {
        if (d1.yyyy > d2.yyyy)
        {
            return 1;
        }
        else if (d1.mm > d2.mm && d1.yyyy == d2.yyyy)
        {
            return 1;
        }
        else if (d1.dd > d2.dd && d1.mm == d2.mm && d1.yyyy == d2.yyyy)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
}
int main()
{
    dt d1 = {24, 2, 2005};
    dt d2 = {21, 2, 2005};
    int result = Compare(d1, d2);
    if (result == 0)
    {
        printf("same");
    }
    else if (result == 1)
    {
        printf("date 1 is newer");
    }
    else
    {
        printf("date 2 is newer");
    }
    return 0;
}