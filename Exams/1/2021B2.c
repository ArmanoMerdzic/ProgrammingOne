#include <stdio.h>

int main()
{
    double x;
    int k;

    do{
        scanf("%lf %d", &x, &k);
    }while(k<1);

    double sum=0.0;
    for(int i=0; i<k; i++){
        double brojnik=1.0;
        double nazivnik=1.0;

        for(int j=1; j<=i+1; j++){
            brojnik=brojnik*j;
        }

        for(int k=0; k<i+1;k++){
            nazivnik=nazivnik*x;
        }

        sum+=(brojnik/nazivnik);

    }
    printf("%lf", sum);

    
    return 0;
}