#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, length;
    char str[100], tmp;

    fputs("Enter a string: \n", stdout);
    scanf("%[^\n]", str);

    length = strlen(str);

    for ( i = 0 ; i < length - 1 ; i++ )
    {
        for ( j = i + 1 ; j < length ; j++ )
        {
            if ( str[i] > str[j] )
            {
                tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
        }
    }

    printf("| ");
    for ( i = 0 ; i < strlen(str) ; i++ )
    {
        printf("%c | ", str[i]);
    }

    return 0;
}