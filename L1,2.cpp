//program to print name n times
#include<bits/stdc++.h>
using namespace std;
void printSomething(int n){
    if(n==0){
        return;
    }
    cout<<"sukanya"<<" ";
    printSomething(n-1);
}
int main(){
    int n;
    cin>>n;
    printSomething(n);
}


//printing numbers from 1 to n
#include<bits/stdc++.h>
using namespace std;
void print1toN(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    print1toN(i+1,n);
}
int main(){
    int n;
    cin>>n;
    print1toN(1,n);
}

//printing numbers from  n to 1
#include<bits/stdc++.h>
using namespace std;
void printNto1(int i,int n){
    if(i<n){
        return;
    }
    cout<<i<<" ";
    printNto1(i-1,n);
}
int main(){
    int n;
    cin>>n;
    printNto1(n,1);
}
