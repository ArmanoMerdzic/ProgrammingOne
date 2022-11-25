#include <stdio.h>

int main(){
    double x;
    int n;

    do{
        scanf("%lf %d", &x, &n);

    }while(n<1);

    double suma=1.0;
    int brclanova=n-1;

    for(int i=0; i<brclanova; i++){
        double brojnik=1.0;
        double nazivnik=1.0;
        int st=i+1;
        for(int j=0; j<st; j++){
            brojnik= brojnik*x;
        }
        for(int k=1; k<=i+1; k++ ){
            nazivnik=nazivnik*k;
        }

        double rez= brojnik/nazivnik;

        if(i%2==0)
            rez=rez*(-1);
        suma=suma + rez;

    }
    printf("%lf", suma);
    return 0;
}