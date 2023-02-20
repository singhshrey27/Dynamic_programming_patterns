#include<bits/stdc++.h>
// #include<vector>
using namespace std;
// *Memoization method(TOP TO BOTTOM APPROACH)
// Time: O(n) linear 
//Space: O(n) for stack space + O(n) for vector space
class fin{
    public:
int dpfib(vector<int> &dp,int n)
{
    if(n==0||n==1){
        return n;
    }
    if(dp[n]!=-1)
    return dp[n];
    //in the case it is already calculated then use it no need to calculate it again

    else
    {
        return dp[n]=dpfib(dp,n-1)+dpfib(dp,n-2);
        //store the value of that paritcular number
    }
}
};
int main()
{
    fin obj;
    int num=5;
    vector<int> dp(num+1,-1);
    //creating a vector of num+1(considering 0 also) 
    cout<<obj.dpfib(dp,num);
    return 0;
}


// Space optimization method in O(1) space and O(n)
/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n=5;
   int prev2=0;
   int prev=1;
   int value=0;
   for(int i=2;i<=n;i++){
      value=prev+prev2;
      prev2=prev;
      prev=value;
   }
   cout<<value;
   
   return 0;
}
*/


/* Tabulation method: also known as the bottom to up approach

class Solution {
public:
    int fib(int n) {
        //Tabulation method of the dyanamic programming
        vector<int> dp(n+1,-1);
        for(int i=0;i<=n;i++){
            if(i==0||i==1){
                dp[i]=i;
            }
            else{
            dp[i]=dp[i-1]+dp[i-2];
            }
        }
        return dp[n];    
    }
};

*/