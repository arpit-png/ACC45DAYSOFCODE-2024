#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
       
        int temp;
        for(int i=0;i<n;i++)
        {
           for(int j=i+1;j<n;j++)
           {
            if(arr[i]<arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
           }
        }
      
                int min=arr[0];
            for(int i=0;i<x;i++)
            {
               if(arr[i]<min)
               {
                min=arr[i];
               }
            }
         
           cout<<min-1<<endl;
           


    } 
}
