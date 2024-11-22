#include <bits/stdc++.h>
using namespace std;

int main() {
 int T;
    cin >> T;  

    while (T--) {
        int N;
        cin >> N;  

        int evenDivisors = 0, oddDivisors = 0;

        for (int i = 1; i <= N; ++i) {
            if (N % i == 0) { 
                if (i % 2 == 0) 
                    evenDivisors++;
                else 
                    oddDivisors++;
            }
        }

        if (evenDivisors > oddDivisors) {
            cout << "1" << endl;
        } else if (evenDivisors == oddDivisors) {
            cout << "0" << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
