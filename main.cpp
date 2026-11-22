
#include "turnamen.h"

int main() {
    ListTurnamen L;
    createList(L);

    adrParent P1 = createParent("Valorant Champions", "Valorant", 5000000000LL);
    adrParent P2 = createParent("M-Series", "Mobile Legends", 3000000000LL);

    insertParent(L, P1);
    insertParent(L, P2);

    adrParent P = L.first;

    while (P != nullptr) {
        cout << "Nama Turnamen: " << P->info.nama << endl;
        cout << "Game: " << P->info.game << endl;
        cout << "Prize Pool: " << P->info.prizePool << endl;
        cout << "------------------------" << endl;

        P = P->next;
    }

    return 0;
}
