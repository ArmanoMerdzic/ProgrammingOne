#include <stdio.h>

int main()
{
    int x;
    do{
        printf("Unesi x:");
        scanf("%d", &x);
    }while(x<1);

    for(int i=x; i<=2*x; i++){
        int br=0;
        for(int j=2; j<=i/2; j++){
            if(i%j==0 && j%2!=0)
                br++;
        }
        if(br>=3)
            printf("%d ", i);
    }
    return 0;
}