#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(c<a || d<b){
	        cout<<"impossible"<<endl;
	    }
	    else{
	        cout<<"possible"<<endl;
	    }
	}
	return 0;
}
