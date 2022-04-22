//printing subsequences whose sum is K
#include<bits/stdc++.h>
using namespace std;
void printSub(int ind,vector<int>&ds,int sum,int Target,int n,int arr[]){
    if(ind==n){
        if(sum==Target){
            for(int i=0;i<ds.size();i++){
                cout<<ds[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    printSub(ind+1,ds,sum,Target,n,arr);
    ds.pop_back();
    sum-=arr[ind];
    printSub(ind+1,ds,sum,Target,n,arr);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Target;
    cin>>Target;
    vector<int>ds;
    printSub(0,ds,0,Target,n,arr);
}


//printing any one subsequence whose sum is K
#include<bits/stdc++.h>
using namespace std;
bool printSub(int ind,vector<int>&ds,int sum,int Target,int n,int arr[]){
    if(ind==n){
        if(sum==Target){
            for(int i=0;i<ds.size();i++){
                cout<<ds[i]<<" ";
            }
            cout<<endl;
            return true;
        }
        else return false;
    }
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    if(printSub(ind+1,ds,sum,Target,n,arr)==true) return true;
    ds.pop_back();
    sum-=arr[ind];
    if(printSub(ind+1,ds,sum,Target,n,arr)==true) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Target;
    cin>>Target;
    vector<int>ds;
    printSub(0,ds,0,Target,n,arr);
}

//printing any one subsequence whose sum is K
#include<bits/stdc++.h>
using namespace std;
int printSub(int ind,vector<int>&ds,int sum,int Target,int n,int arr[]){
    if(ind==n){
        if(sum==Target) return 1;
        else return 0;
    }
  
    sum+=arr[ind];
    int l=printSub(ind+1,ds,sum,Target,n,arr);
    ds.pop_back();
    sum-=arr[ind];
    int r=printSub(ind+1,ds,sum,Target,n,arr);
    return l+r;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Target;
    cin>>Target;
    vector<int>ds;
    cout<<printSub(0,ds,0,Target,n,arr);
}

