#include<bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;
int reverse(int a){
    int rev=0;
    while(a>0){
        rev=(rev*10)+a%10;
        a/=10;
    }
    return rev;
}
//std::lcm(10, 20) returns lcm of the given elements
//reverse(arr,arr+n)
//sort(arr,arr+n)
//max({array},comp)
//*(find(arr,arr+n,object_to_be_found))

//string.length() gives string length
int sumOfArray(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    return sum;
}
int userInput(int a[],int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
    return 0;
}
int userInput(ll a[],ll n){
    for(ll i=0;i<n;i++)
        cin>>a[i];
    return 0;
}
void userInput(char a[],int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
}
bool isFreqPal(string s){
    string l,u;
    l="";
    u="";
    int length=s.length();
    for(int i=0;i<s.length();i++){
        if(length%2!=0){
            if(i<(s.length()/2))
                l+=s[i];
            else if(i>(s.length()/2))
                u+=s[i];
        }
        else{
            if(i<(s.length()/2))
                l+=s[i];
            else if(i>=(s.length()/2))
                u+=s[i];
        }
    }
    sort(l.begin(),l.end());
    sort(u.begin(),u.end());
    //cout<<"l : "<<l<<' '<<"u : "<<u<<'\n';
    if(u==l)
        return true;
    return false;
}
bool isPal(string s){
    string l,u;
    l="";
    u="";
    int length=s.length();
    for(int i=0;i<s.length();i++){
        if(length%2!=0){
            if(i<(s.length()/2))
                l+=s[i];
            else if(i>(s.length()/2))
                u+=s[i];
        }
        else{
            if(i<(s.length()/2))
                l+=s[i];
            else if(i>=(s.length()/2))
                u+=s[i];
        }
    }
    if(u==l)
        return true;
    return false;
}
int powerOfTwo(int x){
    int check=0,temp=1,con=0;
    while(temp<=x){
        if(temp==x){
            check++;
            break;
        }
        temp*=2;
        con++;
    }
    if(check>0)
        return con;
    return -1;
}
void CopyArrays(int a[],int b[],int n){
    for(int i=0;i<n;i++)
        b[i]=a[i];
}
int solution(int a[],int n){
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        
    }
}
