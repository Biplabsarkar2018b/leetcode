//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void answer(int N,int i){
        if(N==i){
            cout<<i<<" ";
            return;
        }
        cout<<i<<" ";
         answer(N,i+1);
    }
    void printNos(int N)
    {
        //Your code here
        answer(N,1);
        
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends