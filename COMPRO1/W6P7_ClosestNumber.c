#include <stdio.h>
void main()
{
    int x, i, y, c, d, res, more, low;
    d = 9999999;
    scanf("%d", &x);
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &y);

        if (x > y)
        {
            more = x;
            low = y;
        }
        else
        {
            more = y;
            low = x;
        }
        c = more - low;
        if (c <= d)
        {
            d = c;
            res = y;
        }
    }
    printf("%d", res);
}
