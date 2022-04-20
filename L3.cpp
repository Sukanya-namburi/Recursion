//sum of first N numbers
//method-1
#include<bits/stdc++.h>
using namespace std;
int printSum(int i,int n,int sum){
    if(i>n){
        return sum;
    }
    printSum(i+1,n,sum+i);
}
int main(){
    int n;
    cin>>n;
    cout<<printSum(1,n,0);
}

//sum of first N numbers
//method -2
#include<bits/stdc++.h>
using namespace std;
int printSum(int n){
    if(n==0){
        return 0;
    }
    return n+printSum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<printSum(n);
}

//factorial of a number

#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1); //4*3*2*1
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
}
