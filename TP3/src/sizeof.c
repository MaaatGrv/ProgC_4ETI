#include <stdio.h>

int main(void) {
    printf("sizeof (int) = %d bytes, sizeof (int *) = %d bytes, sizeof (int **) = %d bytes, sizeof (char *) = %d bytes, sizeof (char **) = %d bytes, sizeof (char ***) = %d bytes, sizeof (float *) = %d bytes, sizeof (float **) = %d bytes, sizeof (float ***) = %d bytes", sizeof (int), sizeof (int *), sizeof (int **), sizeof (char *), sizeof (char **), sizeof (char ***), sizeof (float *), sizeof (float **), sizeof (float ***));
    return 0;
}