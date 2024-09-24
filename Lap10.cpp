#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char n[100] ;
    printf( "Please your enter word : " ) ;
    gets( n ) ;
    printf( "Your word is : %s\n", n ) ;
    int i = 0 ;
    int len = strlen(n) - 1 ;
    int j = 0 ;
    char temp[ strlen( n ) ] ;
    for( i = 0 ; n[ i ] != '\0' ; i++ ) {
        if( n[i] != ' ' ) {  // ลบช่องว่างออก
            temp[j++] = tolower( n[i] ) ;  // แปลงเป็นตัวพิมพ์เล็ก
        } // end if
    } // end for
    temp[j] = '\0' ;  // ใส่ null terminator ที่ท้าย
    strcpy( n, temp ) ;  // คัดลอกผลลัพธ์กลับไปที่ str
    printf( "Your word is : %s\n", n ) ;
    int a = 0 ;
    int b = 0 ;
    while( a < len ) {
        if( n[a] != n[len] ) {
             b = 1 ;
            break ;
        }else {
            a++ ;
            len-- ;
        } // end if
    } // end while
    if( b == 1 ) {
        printf( "Not pass !!\n" ) ;
    }else {
        printf( "Pass !!\n" ) ;
    } // end if
    return 0 ;
} // end function