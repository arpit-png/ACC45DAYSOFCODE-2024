#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
    cin >>n;
    while (n--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans = max({a+b,b+c,a+c});
        cout<<ans<<endl;
    }
}
