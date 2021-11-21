#include <iostream>

using namespace std;

int main()
{

    int from, interval, to;

    printf("===== Deret Matematika Cerdas =====\n");
    
    printf("\nMasukkan mulai = "); scanf("%d", &from);
    printf("Masukkan interval = "); scanf("%d", &interval);
    printf("Masukkan banyak bilangan = "); scanf("%d", &to);

    bool isMinus = 0 > interval;

    int acc = from;

    printf("\nproses hitung penjumlahan = ");
    for (int i = 0; i <= to-1; i++)
    {
        if (i == 0) {
            cout << acc;
        } else {
            if (isMinus) {
                printf("+(%d)", acc);
            } else {
                cout << "+" << acc;
            }
        }

        acc+=interval;
    }

    int total = (1+(interval*0.5)*(to-1))*to;
    printf(" = %d\n", total);

    printf("proses hitung perkalian = ");
    
    int sumAcc = from;
    int fold = from;

    for (int i = 0; i <= to-1; i++)
    {
        fold*=sumAcc;
        if (i == 0) {
            cout << sumAcc;
        } else {
            if (isMinus) {
                printf("x(%d)", sumAcc);
            } else {
                cout << "x" << sumAcc;
            }
        }

        sumAcc+=interval;
    }

    printf(" = %d", fold);
    printf("\n\n");
    
    return 0;
}
