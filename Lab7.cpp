#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int c = 0 ;
    do {
        srand( time( NULL ) ) ; 
		int n = 0 ;
		int i =  rand() % 100 + 1 ;
		int score = 100 ;
		int a1 = 1 ;
		int a2 = 100 ;
    	printf( "เริ่มเกม\n" ) ;
		printf( "ตอนนี้คะแนนของคุณมี %d คะแนน \n", score ) ;
		scanf( "%d", &n ) ;
		while( i != n ) {
			if( n > i ) {
				if( n < a2 ) {
				    a2 = n - 1 ; 
				} // end if
			     printf( "มากเกินไปค้าบ คะแนนที่ถูกต้องอยู่ช่วง %d - %d\n", a1, a2 ) ;
				score -= 10 ;
			}else {
				if( n > a1 ) {
					a1 = n + 1 ;
				} // end if
				printf( "น้อยไปค้าบ คะแนนที่ถูกต้องอยู่ช่วง %d - %d \n", a1, a2 ) ;
				score -= 10 ;
			} // end if
			if( score <= 0 ) {
		    	printf( "คุณแพ้แล้ว\n" ) ;
		    	break ;
			} // end if
			printf( "ตอนนี้คะแนนคุณเหลือ %d คะแนน\n", score ) ;
			scanf( "%d", &n ) ;
		} // end while
		printf( "ยินดีด้วยถูกต้องแล้ว\n" ) ;
        
		while ( 1 ) {
            printf( "พิมพ์ 1 เพื่อเล่นใหม่ หรือ -1 เพื่อออกจากเกม: " ) ;
            scanf( "%d", &c ) ;

            if ( c == 1 || c == -1 ) {
                break ;
            }else {
                printf( "กรอกตัวเลือกที่ถูกต้อง (1 หรือ -1)\n" ) ;
            }//end if
        } // end while
    } while ( c != -1 ) ;  // if c == -1 end dowhile

    printf( "ออกจากเกม\n" ) ;
    return 0 ;
} // end funtion
