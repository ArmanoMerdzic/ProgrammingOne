#include <stdio.h>

int main(){

    int x, k;
    do{
        printf("Unesi x i n:");
        scanf("%d %d", &x, &k);
    }while(x<1 || k<=1);

    double suma=-1, startb=3;
    for(int i=0; i<k-1; i++){
        double brojnik=1.0;
        double nazivnik=1.0;

        for(int j=0; j<x; j++){
            brojnik=brojnik*startb;
        }
        for(int k=1; k<=startb-1; k++){
            nazivnik=nazivnik*k;
        }
        double rez=brojnik/nazivnik;

        if(i%2!=0)
            rez = rez*(-1);

        startb+=2;
        suma=suma+rez;        

    }
    printf("%lf", suma);


    return 0;
}