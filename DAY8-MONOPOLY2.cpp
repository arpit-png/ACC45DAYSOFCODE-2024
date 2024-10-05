#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int cases;
	cin>>cases;
	while(cases--){
	    vector<int>v;
	    for(int i=0;i<4;i++){
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    sort(v.begin(),v.end());
	    
	    if(v[3]>v[0]+v[1]+v[2]){
	        cout<<"Yes"<<endl;
	        
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}
