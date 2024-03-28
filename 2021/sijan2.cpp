#include <iostream>
#include <utility>
#include <set>
#include <vector>
#include <map>
using namespace std;

typedef pair<int,int> pii;

int main(){
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;

    vector<char> csq;
    for(int i=0;i<n-1;++i){
        if(s[i]!=s[i+1]){
            csq.push_back(s[i]);
        }   
    }
    csq.push_back(s[n-1]);

    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    map<int,int> letter_to_number;
    for(int i=0;i<26;++i) letter_to_number[alphabet[i]] = i+1; 
    vector<int> isq;
    for(int i=0;i<csq.size();++i){
        isq.push_back(letter_to_number[csq[i]]);
    }
    
    set<int> st;
    int pre[isq.size()];
    pre[0]=0;
    pre[1]=1;
    for(int i=1;i<isq.size();++i){
        st.insert(isq[i]);
        if(isq[i]>isq[i-1]){
            ++ans;
        } 
    }
}
