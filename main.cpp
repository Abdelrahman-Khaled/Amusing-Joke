#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[26];
int arr1[26];
int main()
{
    string s[2],res;
    cin>>s[0]>>s[1];
    cin>>res;
    int sz1=0,sz2=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<s[i].size();j++){
            arr[s[i][j]-65]++; sz1++;
        }
    }
    for(int i=0;i<res.size();i++){
        arr1[res[i]-65]++; sz2++;
    }
    if(sz1!=sz2){cout<<"NO"<<endl; return 0;}
    for(int i=0;i<26;i++){
        if(arr[i]<arr1[i]){cout<<"NO"<<endl; return 0;}
    }
    cout<<"YES"<<endl;
    return 0;
}
