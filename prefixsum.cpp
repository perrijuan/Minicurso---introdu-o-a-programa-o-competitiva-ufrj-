#include<iostream>
#include<vector>
using namespace std;


void main(){

    int n;

    cin>>n;

    vector<int> query;

    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        query.push_back(x);
    }

    vector<int>prefixsum(n,0);

    prefixsum[0] = query[0];

    for(int a=0;a<n;a++){
        prefixsum[a]=prefixsum[a-1]+query[a];
        
    }

    for(auto run : prefixsum){
        cout<<run<<" ";
    }
}
