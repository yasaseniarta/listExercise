#include "CSLL.h"

void create_List_1301210557(listLagu &L){
    first(L) = NIL;
}
void createElemen_1301210557(infotype laguBaru, adr &pLagu){
    pLagu = new element;
    info(pLagu) = laguBaru;
    next(pLagu) = NIL;
}
void insertFirst_1301210557(listLagu &L, adr pLagu){
    if (first(L) == NIL) {
        first(L) = pLagu;
        next(first(L)) = first(L);
    } else {
        adr last = first(L);
        while (next(last) != first(L)){
            last = next(last);
        }
        next(pLagu) = first(L);
        first(L) = pLagu;
        next(last) = first(L);
    }
}
void deleteLast_1301210557(listLagu &L, adr &pLagu){
    if (first(L) == NIL){
        cout<<"Empty List"<<endl;
    }else{
        adr newLast;
        newLast = first(L);
        while (next(next(newLast)) != first(L)){
            newLast = next(newLast);
        }
        pLagu = next(newLast);
        next(newLast) = first(L);
        next(pLagu) = NIL;
    }
}
void showSemuaLagu_1301210557(listLagu L){
    adr P = first(L);
    if (first(L) == NIL){
        cout<<"Empty List"<<endl;
    } else {
        int i = 3;
        cout<<"----------------------------------------------------------------";
        gotoxy_1301210557(1,1);
        cout<<"Artis";
        gotoxy_1301210557(20,1);
        cout<<"Judul";
        gotoxy_1301210557(45,1);
        cout<<"Genre";
        gotoxy_1301210557(55,1);
        cout<<"Playtime"<<endl;
        cout<<"----------------------------------------------------------------";
        while (next(P) != first(L)){
            gotoxy_1301210557(1,i);
            cout<<info(P).Artis;
            gotoxy_1301210557(20,i);
            cout<<info(P).Judul;
            gotoxy_1301210557(45,i);
            cout<<info(P).Genre;
            gotoxy_1301210557(55,i);
            cout<<info(P).playtime;
            i++;
            P = next(P);
        }
        gotoxy_1301210557(1,i);
        cout<<info(P).Artis;
        gotoxy_1301210557(20,i);
        cout<<info(P).Judul;
        gotoxy_1301210557(45,i);
        cout<<info(P).Genre;
        gotoxy_1301210557(55,i);
        cout<<info(P).playtime<<endl;
        cout<<"----------------------------------------------------------------";
    }
    cout<<endl;
}

void gotoxy_1301210557(short x, short y){
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
