#include<iostream>

using namespace std;

struct Book
{
    string author;
    int publishedYear;
    string title;
};


int main()
{
    Book listOfBooks[] = {
        Book{"Ainul", 1928, "History of bonek"},
        Book{"Yaqin", 1928, "History of surabaya"},
        Book{"budiono", 1928, "History of itats"}
    };

    string author;

    printf("Perpustakaan : \n");

    for (int i = 0; i < 3; i++)
    {
        Book book = listOfBooks[i];
        cout<<"\nJudul buku: "<<book.title;
        cout<<" & Author: "<<book.author;
        cout<<" & Tahun rilis: "<<book.publishedYear;
    }

    cout<<"\n\nMasukkan penulis yang anda cari = ";
    cin>>author;

    for (int i = 0; i < 3; i++)
    {
        if (title == listOfBooks[i].author) {
            Book data = listOfBooks[i];
            cout<<"Judul buku: "<<data.title;
            cout<<"\nAuthor: "<<data.author;
            cout<<"\nTahun rilis: "<<data.publishedYear;
            cout<<"\n";
        }
    }
    
    cout<<"\n\n==============";

    return 0;
}

