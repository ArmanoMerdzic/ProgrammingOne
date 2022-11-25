#include <stdio.h>

int main()
{
    int a, b;

    do{
        printf("Unesi dva broja a i b:");
        scanf("%d %d", &a, &b);
    }while(a<1 || b<1 || a>=b);

    for(int i=a; i<=b; i++){
        int br=0;
        for(int j=2; j<=i/2; j++){
            if(i%j==0)
                br++;
        }

        if(br>=5)
            printf("%d ", i);
    }

    return 0;
}