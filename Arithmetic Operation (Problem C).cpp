#include <stdio.h>

int main()
{
    float x;
    float y;
    float hasil_tambah,hasil_kurang,hasil_kali,hasil_bagi;
    
    scanf("%f %f",&x,&y);
    hasil_tambah = x+y;
    hasil_kurang = x-y;
    hasil_kali = x*y;
    hasil_bagi = x/y;
    printf("%.2f %.2f %.2f %.2f\n" ,hasil_tambah,hasil_kurang,hasil_kali,hasil_bagi);




    return 0;
}
