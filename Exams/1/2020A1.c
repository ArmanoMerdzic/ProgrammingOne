#include <stdio.h>

int main(){

    int d;
    do{
        printf("Unesi d:");
        scanf("%d", &d);
    }while(d<1);

    int kopija=d, suma=0;

    while(kopija>0){
        int st=1;

        if(kopija%10==0)
            suma=suma+1;
        else{ 
            for(int i=0; i<kopija%10; i++){
                st=st*(kopija%10);
        }
            suma= suma+ st;
        }
        kopija=kopija/10;
  }
    if(suma==d)
        printf("%d", suma);

    return 0;
}