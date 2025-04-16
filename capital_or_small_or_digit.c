#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    if ((X >= 'A' && X <= 'Z') || (X >= 'a' && X <= 'z'))
    {
        printf("ALPHA\n");
        if (X >= 'A' && X <= 'Z')
        {
            printf("IS CAPITAL");
        }
        else
        {
            printf("IS SMALL");
        }
    }
    else if (X >= '0' && X <= '9')
    {
        printf("IS DIGIT");
    }

    return 0;
}