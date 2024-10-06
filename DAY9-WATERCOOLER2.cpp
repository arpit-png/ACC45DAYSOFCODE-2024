#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int t;
    cin >> t;
    int x, y;
    while (t--) {
        cin >> x >> y;
        int count = (y - 1) / x;
        cout << count << endl;
    }
    return 0;
}
