#include <stdio.h>

int main(){
    double x;
    int k;

    do{
        scanf("%lf %d", &x, &k);
    }
    while(k <= 2);
    double xnext=x+1;

    for(int i=3; i<=k; i++){
        double s = 1.0, f = 1.0;
        for(int j = 0; j < (i-1)*2-1; j++){
            s *= (i-1);
        }
        for(int z = 1; z <= (i-1); z++){
            f*=z;
        } 
        double rez = (x*s)/(xnext*f);
        x = xnext;
        xnext = rez;
    }

    printf("%lf",xnext);

    return 0;
}