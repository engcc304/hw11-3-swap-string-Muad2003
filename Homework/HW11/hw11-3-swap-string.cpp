/*
    ผู้ใช้พิมพ์ข้อความเข้ามาในระบบ และให้คุณทำการแสดงการกลับตัวอักษรทั้งหมดที่ผู้ใช้กรอกมา เช่น ผู้ใช้กรอกมาว่า Hello World คุณจะต้องแสดงบนหน้าจอว่า dlroW olleH

    Test case:
        Hello world
    Output:
        dlrow olleH

    Test case:
        RMUTL
    Output:
        LTUMR

    Test case:
        Orio
    Output:
        oirO

*/

#include <stdio.h>
#include <string.h>
void swap ( char word[ 100 ] ) {
    int count = strlen ( word ) ;
    // สลับค่า
    for ( int i = 0 ; i < count / 2 ; i++ ) {
        char temp = word[ i ] ;
        word[ i ] = word[ count - 1 - i ] ;
        word[ count -1 - i ] = temp ;
    } // end for
} // end swap
int main() {
    
    // รับค่า
    char word[ 100 ] ;
    fgets ( word, sizeof( word ), stdin ) ;
    
    // ใช้ฟังก์ชั่นและพิมพ์
    swap ( word ) ;
    printf ( "%s",word ) ;
    
    return 0 ;
} // end main