#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, j ,n, z;
    i = 0;
    n = 5;
    z = 1;
    //quantidade de linhas
    for(i=1; i<=n; i++){

            //controla oq é impresso em cada variavel
            for (j=0; j < i; j++){

                printf("%d", (j+i)%2);



            }

            printf("\n");

    }
    system("pause");
    return 0;
    }
