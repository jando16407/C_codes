#include <stdio.h>
#include <locale.h>

int main(){
    //declare values    
    int base = 0;
    int exponent = 0;
    long double res = 1;

    //ask for base and exponent
    printf("This program will calculate a exponential value.\n");
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    //multiply base for number of exp
    int i = 0;
    for(i=0;i<exponent;++i){
        res*=base;
    }

    //use this for number format (e.g., 1000 -> 1,000 )
    setlocale(LC_NUMERIC, "");

    //output result
    printf("\nResult: %'.0Lf\n", res);
    return 0;
}