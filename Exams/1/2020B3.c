#include <stdio.h>

int main()
{
    int a, b;

    do{
        printf("unesi a i b:");
        scanf("%d %d", &a, &b);
    }while(a<1 || b<1 || a>=b);

    for(int i=a; i<=b; i++){
        int suma=0;
        for(int j=1; j<=i/2; j++){
            if(i%j==0)
                suma= suma+ j;
        }

        if(suma%2==0)
            printf("%d ", i);
    }

}
