#include <stdio.h>

int main()
{
    int x = 0 ;
    scanf( "%d", &x ) ;
    if( x >= 80 && x <= 100 ) {
        printf( " A ! " ) ;
    } else if( x >= 75 && x <= 79 ) {
        printf( " B+ ! " ) ;
    } else if( x >= 70 && x <= 74 ) {
        printf( " B ! " ) ;
    } else if( x >= 65 && x <= 69 ) {
        printf( " C+ ! " ) ;
    } else if( x >= 60 && x <= 64 ) {
        printf( " C ! " ) ;
    } else if( x >= 55 && x <= 59 ) {
        printf( " D+ ! " ) ;
    } else if( x >= 50 && x <= 54 ) {
        printf( " D ! " ) ;
    }else if( x >= 0 && x <= 49 ) {
         printf( " F ! " ) ;
    } else{
        printf( " กรอกเลขใหม่ด้วย " ) ;
    } //end if 

    return 0 ;
} //end fc
