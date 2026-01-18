#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch,
 * system("pause") or input loop */

int
main(void)
{
    int i         = 0;
    int k         = 0;
    int mat[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

    for (i = 0; i < 3; i++) {
        for (k = 0; k < 3; k++) {
            printf(" %p \n", mat[i] + k);

            //	printf("%p \n",mat[i]);
            //	printf("\n    ");
        }
    }
    printf("\n \n");
    for (i = 0; i < 3; i++) {
        printf(" %p \n", mat + 1);
    }
    printf(" \n \n");
    printf(" %p ", *(mat + 1) + 1);
    printf(" %p你好 \n", mat + 1 + 1);

    return 0;
}