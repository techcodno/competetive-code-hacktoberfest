/*
Here the term Majority element means the frequency of array element has to be greater than N/2;
This can be easily done in O(n) space and O(n) time. But the Challenge is to do it in O(1) space & linear Time
For that we use Moore's Voting Algorithm where we select a candidate(the tricky part of the algorithm is selecting candidate element) & check its count
*/
#include<bits/stdc++.h>
using namespace std;
int selectCandidate(vector<int>& a,int n);
int majorityElement(vector<int>& a,int n);
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &i:a)cin>>i;
        cout<<majorityElement(a,n)<<endl; // returns -1 if there's no such element with count greater than n/2;
    }
}