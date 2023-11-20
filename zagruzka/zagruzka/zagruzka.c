#include<windows.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>


int main()
{
    char chars[] = "|/\-";
    int i, j;
    for (i = 0, j = 0; i < 10000; i++)
    {
        fprintf(stderr, "%c", chars[j++]);
        if (j == 4)
            j = 0;
        Sleep(250);
        fprintf(stderr, "%c", 0x8);
    }

    return 0;
}