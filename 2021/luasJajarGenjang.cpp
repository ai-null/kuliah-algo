#include <stdio.h>

int luasJajarGenjang(int alas, int tinggi)
{
    return alas * tinggi;
}

int main()
{
    int alas = 7;
    int tinggi = 4;
    int hasil = luasJajarGenjang(alas, tinggi);

    printf("Luas jajar genjang dari alas=%d dan tinggi=%d adalah %d", alas, tinggi, hasil);
    
    return 0;
}