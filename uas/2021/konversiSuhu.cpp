#include <stdio.h>
#include <iostream>

using namespace std;

enum Type : int
{
    // CELCIUS = 67,
    FAHRENHEIT = 70,
    REAMUR = 82,
    // AVERAGE = 65
};

int step = 10, limit = 100;
int size = 10;
int listNilai[10] = {};

void convertCelciusToFarenheit()
{
    printf("F = ");
    for (int i = 0; i < size; i++)
    {
        float result = (9.0 / 5.0 * listNilai[i]) + 32;

        cout << result << "\u02DA";
        if (i != size - 1)
            printf(",");
    }
}

void convertCelciusToReamur()
{
    printf("R = ");
    for (int i = 0; i < size; i++)
    {
        float result = listNilai[i] * (4.0 / 5.0);

        cout << result << "\u02DA";
        if (i != size - 1)
            printf(",");
    }
}

void handleInput(char input)
{
    switch (int(toupper(input)))
    {
    case Type::FAHRENHEIT:
        printf("Hasil konversi suhu C menuju fahrenheit adalah :\n");
        convertCelciusToFarenheit();
        break;

    case Type::REAMUR:
        printf("Hasil konversi suhu C menuju reamur adalah :\n");
        convertCelciusToReamur();
        break;

    default:
        printf("¯\\_(ツ)_/¯");
        break;
    }
}

int main()
{
    string instructions = "\nKetik F atau f untuk konversi suhu menuju Fahrenheit";
    instructions.append("\nKetik R atau r untuk konversi suhu menuju Reamur");
    // instructions.append("\nKetik A atau a untuk mencari rata-rata (average)");
    instructions.append("\nSilahkan ketik huruf/alfabet dari menu yang tersedia : ");

    char input;

    for (int i = 0; i < size; i++)
    {
        listNilai[i] = (i + 1) * step;
    }

    printf("============= Sistem Mesin Konversi Suhu =============\n");
    printf("Data suhu selsius : %d...%d\n\n", listNilai[0], listNilai[size - 1]);
    printf("Untuk proses konversi suhu anda dapat memilih pilihan menu sebagai berikut: ");

    cout << instructions;
    cin >> input;
    printf("Pilihan anda adalah ===> %c\n\n", input);

    handleInput(input);

    printf("\n\n========= Program Selesai =========\n\n");
    return 0;
}