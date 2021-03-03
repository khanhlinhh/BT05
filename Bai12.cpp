#include <iostream>

using namespace std;

void nhapKN(int k[], int n[], int *soPhanTu) {
    int i = 0;
    while (true) {
        cin >> k[i] >> n[i];
        i++;
        soPhanTu = &i;
        if (k[i] == -1 && n[i] == -1) break;
    }
}

int kiemTra(int k, int n) {
    if (0 <= k && k <= n && 1 <= n && n <= 20) 
        return 1;
    else return 0;
}

int toHop(int k, int n) {
    int subs = n-k;
    int j = n;
    while (j != 1) {
        n *= (j-1);
        j--;
    }
    int j = k;
    while (j != 1) {
        k *= (j-1);
        j--;
    }
    int j = subs;
    while (j != 1) {
        subs *= (j-1);
        j--;
    }
    return n/(subs*k);
}

int main () {
    int k[1000], n[1000];
    int soPhanTu = 0;
    nhapKN(k[1000], n[1000], soPhanTu);
    for (int i = 0; i < soPhanTu; i++) {
        if(kiemTra(k[i], n[i])) {
            cout << toHop(k[i], n[i]) << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}