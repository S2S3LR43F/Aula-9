#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{  setlocale(LC_ALL, "Portuguese");
    int i, j ,n;
    n = 5;
    //quantidade de linhas
    for(i=1; i<=n; i++){
            //controla oq é impresso em cada variavel
            for (j=1; j<=i; j++){
            printf("%d", j);
           }
            printf("\n");
}


    system("pause");
    return 0;
    }
