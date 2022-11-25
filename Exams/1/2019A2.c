#include <stdio.h>

int main(){
    int a, b;

    do{
        printf("a i b:");
        scanf("%d %d", &a, &b);
    }
    while(a < 1 || b < 1 || a >= b);

    for(int i = a; i <= b; i++){
        int suma_parni = 0, suma_neparni = 0, kopija = i;
        while(kopija > 0){
            if(kopija % 10 % 2 == 0)
                suma_parni+=(kopija % 10);
            if(kopija % 10 % 2 != 0)
                suma_neparni += (kopija % 10);
            kopija /= 10;
        }
        if(suma_neparni == suma_parni)
            printf("%d ", i);
    }
    return 0;
}