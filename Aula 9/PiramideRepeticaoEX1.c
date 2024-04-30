#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{  setlocale(LC_ALL, "Portuguese");
    int i, j ,n;
    n = 5;

    for(i=0; i<n; i++){
            for (j=0; j<=i; j++){
            printf("*");
           }
            printf("\n");
}


    system("pause");
    return 0;
    }

