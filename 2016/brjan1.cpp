#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("promote.in");
    ofstream cout("promote.out");
    int bs, be, ss, se, gs, ge, ps, pe;
    cin >> bs >> be >> ss >> se >> gs >> ge >> ps >> pe;

    int newContestants = (be + se + ge + pe) - (bs + ss + gs + ps);
    int gold, silver, bronze;
    
    bronze = bs + newContestants - be;
    silver = ss + bronze - se;
    gold = gs + silver - ge;
    

    cout << bronze << endl;
    cout << silver << endl;
    cout << gold << endl;

}