//reverse an array
//method-1
#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int low,int high,int n,int arr[]){
    if(low>=high){
        return;
    }
    swap(arr[low],arr[high]);
    ReverseArray(low+1,high-1,n,arr);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ReverseArray(0,n-1,n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//reverse an array
//method-2 (using single pointer)
#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int i,int n,int arr[]){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    ReverseArray(i+1,n,arr);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ReverseArray(0,n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//check whether the string is palindrome or not
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int i,string s,int n){
    if(i>=n/2){ 
        return true;
    }
    if(s[i]!=s[n-i-1]){ 
        return false;
    }
    return isPalindrome(i+1,s,n);
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    cout<<isPalindrome(0,s,n);
}
