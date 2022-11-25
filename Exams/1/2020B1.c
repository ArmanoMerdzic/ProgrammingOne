#include <stdio.h>

int main(){
    int n, stepen=2;
    do{
        printf("Unesite n");
        scanf("%d", &n);
    }while(n<1);

    int kopija=n, suma=0;
    while(kopija>0){
        int cifra=kopija%10;
        int st=1;
        for(int i=0; i<stepen; i++){
            st=st*cifra;
        }
        suma=suma+st;
        kopija=kopija/10;
        stepen++;
        
    }
    if(suma==n)
        printf("%d", suma);
}