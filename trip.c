
#include <stdio.h>

int main() 
{
    int n, i;
    double average, negDiff, posDiff, minDiff, total;

    while (scanf("%d", &n) == 1 && n != 0) 
      {
        double money[n];
        total = 0.0;
        for (i = 0; i < n; i++)
        {
            scanf("%lf", &money[i]);
            total += money[i];
        }
        average = (long) ((total / n) * 100.0) / 100.0;
        negDiff = posDiff = 0.0;
        for (i = 0; i < n; i++) 
         {
            if (money[i] > average)
                posDiff += (long) ((money[i] - average) * 100.0) / 100.0;
            else
                negDiff += (long) ((average - money[i]) * 100.0) / 100.0;
        }
        minDiff = posDiff > negDiff ? negDiff : posDiff;
        printf("$%.2lf\n", minDiff);
    }
    return 0;
}
