#include <stdio.h>
#include <string.h>
    struct Student {
        char Name[20] ;
        char ID[5] ;
        float ScoreSub1 ;
        float ScoreSub2 ;
        float ScoreSub3 ;
        float ScoreSub4 ;
        float ScoreSub5 ;
    } typedef S ;
void grade(S std) {
    float scores[5] = { std.ScoreSub1, std.ScoreSub2, std.ScoreSub3, std.ScoreSub4, std.ScoreSub5 } ;
    for ( int i = 0; i < 5; i++ ) {
        if ( scores[i] >= 80 ) {
            printf("A  ") ;
        } else if ( scores[i] >= 75 ) {
            printf("B+ ") ;
        } else if ( scores[i] >= 70 ) {
            printf("B  ") ;
        } else if ( scores[i] >= 65 ) {
            printf("C+ ") ;
        } else if ( scores[i] >= 60 ) {
            printf("C  ") ;
        } else if ( scores[i] >= 55 ) {
            printf("D+ ") ;
        } else if ( scores[i] >= 50 ) {
            printf("D  ") ;
        } else {
            printf("F  ") ;
        } // end if
    } // end for
    printf("\n") ;
} // end grade
float Avg(S std) {
    float sum = std.ScoreSub1 + std.ScoreSub2 + std.ScoreSub3 + std.ScoreSub4 + std.ScoreSub5 ;
    float AVG = sum / 5 ;
    return AVG ;
} // end avg
int main() {
    int Unit = 0 ;
    S a[3] ;
    S b[3] ;
    S s[3] ;
    printf( "Enter Unit Student : " ) ;
    scanf( "%d", &Unit ) ;
    for( int i = 0 ; i < Unit ; i++ ) {
        printf( "Enter Your Name students [%d] : ", i + 1 ) ;
        scanf( "%s", a[i].Name ) ;
        printf( "Enter Your ID student [%d] : ", i + 1 ) ;
        scanf( "%s", b[i].ID ) ;
        printf( "Enter Your ScoreSub 1-5 : " ) ;
        scanf( "%f %f %f %f %f", &s[i].ScoreSub1, &s[i].ScoreSub2, &s[i].ScoreSub3, &s[i].ScoreSub4, &s[i].ScoreSub5  ) ;
    } // end for
    printf( "OUTPUT : \n" ) ;
    for( int i = 0 ; i < Unit ; i++ ) {
        printf( "Student %d : \n", i + 1 ) ;
        printf( "Name : %s\n", a[i].Name ) ;
        printf( "ID : %s\n", b[i].ID ) ;
        printf( "Scores : %.2f  %.2f  %.2f  %.2f  %.2f\n", s[i].ScoreSub1, s[i].ScoreSub2, s[i].ScoreSub3, s[i].ScoreSub4, s[i].ScoreSub5 ) ;
        printf( "grade : " ) ;
        grade( s[i] ) ;
        float avg = Avg( s[i] ) ;
        printf( "Average Scores: %.1f\n\n", avg ) ;
    } // end for

    return 0 ;
} // end function
