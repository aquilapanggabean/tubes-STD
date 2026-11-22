
#ifndef TURNAMEN_H
#define TURNAMEN_H

#include <iostream>
#include <string>
using namespace std;

struct Turnamen {
    string nama;
    string game;
    long long prizePool;
};

struct Pertandingan {
    string idMatch;
    string timA;
    string timB;
    string skor;
    string status;
};

typedef struct elmChild *adrChild;
typedef struct elmParent *adrParent;

struct elmChild {
    Pertandingan info;
    adrChild next;
};

struct elmParent {
    Turnamen info;
    adrParent next;
    adrChild firstChild;
};

struct ListTurnamen {
    adrParent first;
};

void createList(ListTurnamen &L);

adrParent createParent(string nama, string game, long long prizePool);
adrChild createChild(string idMatch, string timA, string timB, string skor, string status);

void insertParent(ListTurnamen &L, adrParent P);

#endif
