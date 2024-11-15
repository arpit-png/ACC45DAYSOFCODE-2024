#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
	cin>>t;
	while(t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    int a=0,b=0;
	    for(int i=1;i<=n;i++)
	    {
	        if(i%2==0)
	        {
	            a++;
	        }
	        else
	        {
	            b++;
	        }
	    }
	     cout<<x*a+y*b<<endl;
	}
	return 0;
}
