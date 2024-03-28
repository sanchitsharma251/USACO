#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,s;
    cin>>m>>s;
    if(m==1&&s==0){
        cout<<0<<" "<<0<<endl;
        return 0;
    }
    if(1>s||9*m<s) {
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }

    vector<int> largest_digits;
    int temp=s;
    for(int i=0;i<m;++i){
        if(temp>=9){
            largest_digits.push_back(9);
            temp-=9;
        }else{
            largest_digits.push_back(temp);
            temp=0;
        }
    }

    vector<int> smallest_digits;
    temp=s;
    for(int i=0;i<m;++i){
        if(temp>=9){
            smallest_digits.push_back(9);
            temp-=9;
        }else{
            smallest_digits.push_back(temp);
            temp=0;
        }
    }
    reverse(smallest_digits.begin(),smallest_digits.end());
    if(smallest_digits[0]==0){
        smallest_digits[0]=1;
        for(int i=1;i<smallest_digits.size();++i){
            if(smallest_digits[i]>0) {
                --smallest_digits[i];
                break;
            }

        }
    }
    string smallest="";
    string largest="";
    for(auto x:smallest_digits) smallest+=(x+'0');
    for(auto y:largest_digits) largest+=(y+'0'); 
    cout<<smallest<<" "<<largest<<endl;
    return 0; 
}
