#include <stdio.h>

int main()
{
    int num;
    int fac=1;
    int i = 1;
    printf("Enter the number you want factorial");
    scanf("%d", &num);
    while (i <= num)
    {
        fac= fac  * i;
    }

    printf("%d",num);

    return 0;
}