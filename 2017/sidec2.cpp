#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("measurement.in");
    ofstream cout("measurement.out");
    int N, G;
    cin >> N >> G;
    vector<vector<int>> A;
    for (int i=0;i<N;++i){
        int day,ID;
        cin>>day>>ID;
        string change;
        cin>>change;
        int multiply=1;
        if(change[0]=='-'){
            multiply=-1;
        }
        string number;
        for(int i=1;i<change.size();++i){
            number+=change[i];
        }
        A.push_back({day,ID,(stoi(number))*multiply});
    }
    sort(A.begin(),A.end());
    // Whenever a new cow is added, how does it change the order?
    // * The new cow has the same or higher amount than our current top cow(s) which means that the display changes
    // * One of the top cows, their amount decreases which means that they will be kicked out of the top milking cows
    // Therefore, keep track of the cows with the highest milk outputs
    // Whenever a new highest milk is found, note the following things
    // * First, if the new highest milk comes from a cow who is the ONLY highest milking cow, we have no change
    //   * However, if we have a highest milk that is from a different cow, we must make the highest milking cow ONLY the current cow
    // * Second, if the new highest milk is the same, that means that the number of cows increases by 1, making a change
    //   * The change must be that we just add this new cow to the list of high milking cows  
    // However, if a lower milk is found, note the following things
    // * First, if the new lower milk comes from a cow who is the ONLY highest milking cow, and it stays as the highest milking cow, we have no change
    // * Otherwise, if the new lower milk comes from a cow who is the one of the higest milking cows, and it doesn't stay as a highest milking cow, we have a change
    //   * For this what happens is that if the current highest cows was only one cow, and it's decreased so much that it is not longer the highest milking cow, we have new highest cows
    //     * The new highest milking cows will just be the greatest cows milking less than the maximum
    //   * Otherwise, if the current highest cows wasn't only just one cow, the maximum stays the same, and the current cow is kicked from the highest milking cows

    // Implementation:
    // First, we have to keep track of each cow by their ID, and keep track of the current amount of milk produced
    //   * For this, I will use a map
    // Second, we have to keep track of the cows and the number of cows with that milk output(ie milk output 2 -> cows 1,3,4)
    //   * For this, I will use a map
    // Third, I will run through each cow
    //   * For each cow, I will make the change to its milk output
    //     * I will then check three cases
    //       * First, the new milk output is greater than the maximum milk output so far
    //         * In this case, I will make the edit to (2)
    //       * Second, the new milk output is equal to the maximum milk output so far
    //         * In this case, I will make the edit to (2)
    //       * Third, the new milk output is less than the maximum milk output so far
    //         * In this case, I will make the edit to (2)

    map<int,int> mp;
    map<int,int,greater<int>> mp2;
    int ans=0;
    mp2[G]=1e9+5;
    for(int i=0;i<N;++i) mp[A[i][1]]=G;
    for(int i=0;i<N;++i){
        mp[A[i][1]]+=A[i][2];
        if(mp[A[i][1]]>(mp2.begin()->first)){
            if((mp2[mp2.begin()->first]==1)&&((mp[A[i][1]]-mp2.begin()->first)==A[i][2])){
                // No change    
            }else{
                ++ans;
            }
        }else if(mp[A[i][1]]==(mp2.begin()->first)){
            ++ans;
        }else{
            if(((mp[A[i][1]]-mp2.begin()->first)==A[i][2])){
                if((mp[A[i][1]])>((++mp2.begin())->first)&&mp2.begin()->second==1){
                    // No change
                }else{
                    ++ans;
                }
            }
        }
        ++mp2[mp[A[i][1]]];
        --mp2[mp[A[i][1]]-A[i][2]];
        if(mp2[mp[A[i][1]]-A[i][2]]<=0) mp2.erase(mp[A[i][1]]-A[i][2]);
    }
    cout<<ans<<endl; 

}
