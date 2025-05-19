#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int suma(int a, int b){
    return a + b;
}

int resta(int a, int b){
    return a - b;
}


int main(){
    int num1 = 12;
    int num2 = 3;
    int op3 = multi(num1,num2);
    printf("%i",op3);
    return 0;
}

