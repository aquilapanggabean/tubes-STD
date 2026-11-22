
#include "turnamen.h"

void createList(ListTurnamen &L) {
    L.first = nullptr;
}

adrParent createParent(string nama, string game, long long prizePool) {
    adrParent P = new elmParent;

    P->info.nama = nama;
    P->info.game = game;
    P->info.prizePool = prizePool;
    P->next = nullptr;
    P->firstChild = nullptr;

    return P;
}

adrChild createChild(string idMatch, string timA, string timB, string skor, string status) {
    adrChild C = new elmChild;

    C->info.idMatch = idMatch;
    C->info.timA = timA;
    C->info.timB = timB;
    C->info.skor = skor;
    C->info.status = status;
    C->next = nullptr;

    return C;
}

void insertParent(ListTurnamen &L, adrParent P) {
    if (L.first == nullptr) {
        L.first = P;
    } else {
        adrParent Q = L.first;

        while (Q->next != nullptr) {
            Q = Q->next;
        }

        Q->next = P;
    }
}
