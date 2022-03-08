#include <stdio.h>

int perhitunganLuasPersegi(int sisi)
{
    return sisi * sisi;
}

int main()
{
    int sisi = 5;
    int interval = 2;
    int sampaiDgn = 10;

    for (int i = 0; i < sampaiDgn; i++)
    {
        int hasil = perhitunganLuasPersegi(sisi);
        printf("Hasil luas persegi dari panjang sisi=%dcm adalah %dcm \n", sisi, hasil);

        sisi*=interval;
    }
    

    return 0;
}
