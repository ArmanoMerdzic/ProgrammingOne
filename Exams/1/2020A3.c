#include <stdio.h>

int main(){

    int x, y;
    do{
        printf("Unesi dva broja:");
        scanf("%d %d", &x, &y);
    }while(x<1 || y<1 || x>=y);

    for(int i=x; i<=y; i++){
        int suma=1;
        for(int j=1; j<=i/2; j++){
            if(i%j==0)
                suma=suma+j;
        }
        if(suma>i)
            printf("%d ", i);
    }

    return 0;
}