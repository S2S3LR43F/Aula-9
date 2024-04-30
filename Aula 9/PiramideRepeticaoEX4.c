#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{  setlocale(LC_ALL, "Portuguese");
    int i, j ,n;
    i = 0;
    n = 4;

    //quantidade de linhas
    for(i=1; i<=n; i++){

            //controla oq é impresso em cada variavel
            for (j=0; j<i; j++){


            printf("%d ",i+j);
           }

            printf("\n");
}


    system("pause");
    return 0;
    }

