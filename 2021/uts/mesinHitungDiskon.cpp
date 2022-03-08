#include <iostream>

using namespace std;

int main()
{

    int price = 650000;
    float disc;

    int qty, change;
    int totalPayment, netPrice;
    float grossPrice;
    char isCustomer;

    printf("=========== SELAMAT DATANG DI TOKO BUTIK \"PANTES\"=================\n");
    printf("Harga baju = Rp.%d-\n", price);

    printf("Masukkan QTY pembelian baju = ");scanf("%d", &qty);
    printf("Apakah anda pelanggan, ketik P jika ya-pelanggan dan Ketik T-jika tidak = ");
    scanf(" %c", &isCustomer);

    printf("\nProses Perhitungan dan Diskon\n");

    if (isCustomer == 'p' || isCustomer == 'P') {
        disc = 0.3;
        printf("total diskon 1 = %.0f\n", ((qty * price) * disc));
        grossPrice = (qty * price) * disc;
        printf("Total diskon = %.0f\n", grossPrice);
    } else {
        grossPrice = 0;
    }

    netPrice = qty * price;
    printf("Total Harga = %d\n", netPrice);
    printf("Total pembayaran = %.0f\n", netPrice - grossPrice);
    cout << "Total Uang anda = "; cin >> totalPayment;

    float balance = (totalPayment - (netPrice-grossPrice));
    if (balance < 0) {
        printf("Maaf, uang anda belum cukup :(\n\n");
    } else {
        printf("\nKembalian = %.0f\n\n", balance);
    }

    return 0;
}