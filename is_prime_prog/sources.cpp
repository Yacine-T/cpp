#include "sources.h"

long long i;
bool Is_Prime(int i)
{
    if (i < 2)
        return false;
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
            return false;
    }
    return true;
}
bool Is_Prime_faster(long long i)
{
    if (i < 2 || (i % 2 == 0 && i != 2))
        return false;

    for (long long j = 3; j <= ceil(sqrt(i)); j++)
    {
        if (i % j == 0)
            return false;
    }
    return true;
}

bool Is_Prime_faster2(long long my_x)
{
   if (my_x <= 1)
        return false;
    if (my_x <= 3)
        return true;

    if (my_x % 2 == 0 || my_x % 3 == 0)
        return false;

    for (int i = 5; i * i <= my_x; i = i + 6)
        if (my_x % i == 0 || my_x % (i + 2) == 0)
            return false;
    return true;
}
