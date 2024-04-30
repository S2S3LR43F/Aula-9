#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i,n,j,k;
    k=0;
    i=0;
    printf("Insira um número: ");
    scanf("%d", &n);

    while (i<n) {
        for(j=0; j <= 4; j++) {
            printf("%d\n", k);
            k = k+2;
        }
        i++;
    }
system("pause");
return 0;
}
