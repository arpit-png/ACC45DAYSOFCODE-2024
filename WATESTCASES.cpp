#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
    cin>>t;
    while(t--){
        int n,ele=INT_MAX;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        string v;
        cin>>v;
        for(int i=0;i<n;i++){
            if(v[i]=='0'){
                if(ele > s[i]){
                    ele = s[i];
                }
            }
        }
        cout<<ele<<endl;
    } 
}
