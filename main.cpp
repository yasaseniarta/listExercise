#include "CSLL.h"

int main()
{
    cout << "Hello world!" << endl;

    listLagu L;
    create_List_1301210557(L);
    infotype laguBaru;
    adr P, pLagu;
    int N;

    N = 0;
    cout<<"Banyak lagu yang akan ditambahkan: ";
    cin>>N;
    cout<<endl;
    cout<<"(Format: Artis Judul Genre Playtime)"<<endl;
    for (int i = 0; i < N; i++) {
        cout<<"Masukkan data lagu : ";
        cin>>laguBaru.Artis;
        cin>>laguBaru.Judul;
        cin>>laguBaru.Genre;
        cin>>laguBaru.playtime;
        createElemen_1301210557(laguBaru, P);
        insertFirst_1301210557(L, P);
    }
    system("CLS");
    showSemuaLagu_1301210557(L);

    system("CLS");
    deleteLast_1301210557(L, pLagu);
    showSemuaLagu_1301210557(L);

    gotoxy_1301210557(1,N+3);
    cout<<"Data terhapus : ";
    gotoxy_1301210557(1,N+4);
    cout<<info(pLagu).Artis;
    gotoxy_1301210557(20,N+4);
    cout<<info(pLagu).Judul;
    gotoxy_1301210557(45,N+4);
    cout<<info(pLagu).Genre;
    gotoxy_1301210557(55,N+4);
    cout<<info(pLagu).playtime;
    gotoxy_1301210557(0,N+5);
    cout<<"----------------------------------------------------------------";

    return 0;
}
