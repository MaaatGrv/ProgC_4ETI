/* convert float (ask for it) to hexadecimal
Example : float f = 1.
hexadecimal : 40 00 00 00
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float f;
    printf("Enter a float: ");
    scanf("%f", &f);
    unsigned char *ptr = (unsigned char *)&f;
    for (int i = 0; i < 4; i++)
    {
        printf("%x ", *ptr);
        ptr++;
    }
    return 0;
}