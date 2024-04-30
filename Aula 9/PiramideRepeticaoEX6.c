#include <stdlib.h>
#include <locale.h>

int main()
{  setlocale(LC_ALL, "Portuguese");
    int i, j ,n, z;
    i = 0;
    n = 4;

    //quantidade de linhas
    for(i=1; i<=n; i++){

            //controla oq é impresso em cada variavel
            for (j=n; j > i; j--){
                printf(" ");
            }
            for (z=0; z<i; z++){
                printf("%d ",i);
           }

            printf("\n");
}
    system("pause");
    return 0;
    }
