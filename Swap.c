#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.14159265359

void *Summaryswap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y; // summary swap
    *x = *x - *y;
}

void xor_swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
}
void swap(int *m, int *e)
{
    int temp = *m;
    *m = *e;
    *e = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    printf("Degisim oncesi degerler:\n");
    printf("A=%d\nB=%d\n", a, b);

    printf("Hangi fonksiyonu kullanmak istediginizi seciniz\n1-Summary swap\n2-Xor swap\n3-3.degisken tanimlayarak:\n");
    int selection;
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
        Summaryswap(&a, &b);
        printf("A=%d\nB=%d", a, b);
        break;
    case 2:
        xor_swap(&a, &b);
        printf("A=%d\nB=%d", a, b);
        break;
    case 3:
        swap(&a, &b);
        printf("A=%d\nB=%d", a, b);
        break;

    default:
        printf("Yanlis deger girildi!!!");
        break;
    }

    return 0;
}