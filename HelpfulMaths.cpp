#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1;
    vector<char> vec;
    for(int i=0; i<s.length();i=i+2){
         vec.push_back(s[i]);
    }
    sort(vec.begin(), vec.end());
    for(int i=0; i<vec.size(); i++){
        if(i==vec.size()-1){
            s1=s1+vec[i];
        }else{
            s1+=vec[i];
            s1+='+';
        }
    }
    cout<<s1;
    return 0;
}