#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i=0,j, k=1;
    while(i<5) {

        j = 2;
        while(j<5){
            printf("%d", k);
            k++;
            j++;
            printf("\n");
        }
        i++;
    }
    system("pause");
    return 0;
    }
