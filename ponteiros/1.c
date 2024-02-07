#include<stdio.h>


    int main(){
        int n=29;
        float x=3.14;
        char z='A';
        printf("%i,%f,%c",n,x,z);
        int *ptrn=&n;
        float *ptrx=&x;
        char *ptrz=&z;
        *ptrn=20;
        *ptrx=90.34;
        *ptrz='W';
        printf("\n%i,%f,%c",n,x,z);
        return 0;
    }