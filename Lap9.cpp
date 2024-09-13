#include <stdio.h>
int main() {
    int n ;
    printf( "Enter Number : " ) ;
    scanf( "%d", &n ) ;

    int adv[n] ;

    for( int i = 0 ; i < n ; i ++ ) {
        printf( "Enter %d number [%d] : ", n, i + 1 ) ;
        scanf("%d", &adv[i] ) ;
        while( adv[i] <= 1 ) {
            printf( "please enter your new number!! \n" ) ;
            printf( "Enter %d number [%d] : ", n, i + 1 ) ;
            scanf("%d", &adv[i] ) ;
        }
    } // end for
    printf( "Output:\n" ) ;
    for( int i = 0 ; i < n ; i ++ ) {
        if( adv[i] % 2 != 0 && adv[i] % 3 != 0 && adv[i] % 5 != 0 && adv[i] % 7 != 0 && adv[i] % 11 != 0 ) {
            printf( "%d ", adv[i] ) ;
        }else if( adv[i] == 2 || adv[i] == 3 || adv[i] == 5 || adv[i] == 7 || adv[i] == 11 ) {
            printf( "%d ", adv[i] ) ;
        }else {
            printf( "# " ) ;
        } // end if
    } // end for
    return 0 ;
} // end function
