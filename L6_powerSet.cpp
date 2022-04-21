//printing subsequences of given array using powerset
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    vector<vector<int>>out;
    for(int i=0;i<pow(2,n);i++){
        ans.clear();
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                ans.push_back(arr[j]);
            }
        }
        out.push_back(ans);
    }
    sort(out.begin(),out.end());
    for(auto it:out){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
