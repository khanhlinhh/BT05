#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
	srand(time(0));
    int n;
    cin >> n; 
	int num = rand() % (n - 0 + 1) + 0;
    cout << num << endl;
	return 0;
}