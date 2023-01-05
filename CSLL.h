#ifndef CSLL_H_INCLUDED
#define CSLL_H_INCLUDED
#include <iostream>
#include <windows.h>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) (L).first
#define NIL NULL

struct infotype {
   string Artis, Judul, Genre;
   int playtime;
};

typedef struct element *adr;
struct element {
    infotype info;
    adr next;
};

struct listLagu {
    adr first;
};

void create_List_1301210557(listLagu &L);
void createElemen_1301210557(infotype laguBaru, adr &pLagu);
void insertFirst_1301210557(listLagu &L, adr pLagu);
void deleteLast_1301210557(listLagu &L, adr &pLagu);
void showSemuaLagu_1301210557(listLagu L);
void gotoxy_1301210557(short x, short y);

#endif // CSLL_H_INCLUDED
