#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int binarynum[1000];
    int i = 0;
    while (n > 0) {
        if (n % 2) binarynum[i] = 1;
        else binarynum[i] = 0;
        n /= 2;
        i++;
    }
    for (int j = i-1; j >= 0; j-- )
        cout << binarynum[j];
    
    cout << endl;
    
}