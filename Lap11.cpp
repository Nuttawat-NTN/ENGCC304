#include <stdio.h>
int power(int base, int exp) {
    int re = 1;
    for (int i = 0; i < exp; i++) {
        re *= base;
    }
    return re;
}
int main() {
    int a, b, c = 0 ;
    printf( "plesas your enter number : " ) ;
    scanf( "%d", &a ) ;
    printf( "%d\n", a ) ;
    b = a ;
    while( b != 0 ) {
        b /= 10 ;
        c++ ;
    }
    printf( "%d\n", c ) ;
    b = a ;
    int sum = 0 ;
    int d = 0 ;
    while( b != 0 ) {
        d = b % 10 ;
        sum += power(d, c) ;
        b /= 10 ;
    }
    printf( "%d\n", sum ) ;
    if(  sum == a ) {
        printf( "Pass!!" ) ;
    }else {
        printf( "Not pass !!" ) ;
    }

    return 0 ;
}