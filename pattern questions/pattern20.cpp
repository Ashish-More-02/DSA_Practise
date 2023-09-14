//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        //outer loop
        for (int i=1;i<=n;i++){
            //printing stars 
            for (int j=0;j<i;j++){
                cout<<"*";
            }
            
            //printing spaces
            for(int j=0;j<2*n-(2*i);j++){
                cout<<" ";
            }
            for (int j=0;j<i;j++){
                cout<<"*";
            }
            cout<<endl;
        
        }
        int even =1;
        for (int i=1;i<=n;i++){
            //printing stars 
            for (int j=n-1;j>=i;j--){
                cout<<"*";
            }
            
            //printing spaces
            for(int j=0;j<2*even;j++){
                cout<<" ";
            }
            //printing stars 
            for (int j=n-1;j>=i;j--){
                cout<<"*";
            }
            cout<<endl;
            even++;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends