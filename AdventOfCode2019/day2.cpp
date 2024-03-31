#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("day2.in", "r", stdin);
  freopen("day2.out", "w", stdout);

  string s;
  cin >> s;

  vector<int> instructions;
  stringstream ss(s);

  while (ss.good()) {
    string substr;
    getline(ss, substr, ',');
    instructions.push_back(stoi(substr));
  }

  int targetOutput = 19690720;
  for (int input1 = 0; input1 < 100; ++input1) {
    for (int input2 = 0; input2 < 100; ++input2) {
      vector<int> copiedInstructions;
      for (int i = 0; i < instructions.size(); ++i) copiedInstructions.push_back(instructions[i]);
     
      copiedInstructions[1] = input1;
      copiedInstructions[2] = input2;
      for (int i = 0; i < copiedInstructions.size(); i += 4) {
        if (copiedInstructions[i] == 1) {
          copiedInstructions[copiedInstructions[i + 3]] = copiedInstructions[copiedInstructions[i + 1]] + copiedInstructions[copiedInstructions[i + 2]];
        } else if (copiedInstructions[i] == 2) {
          copiedInstructions[copiedInstructions[i + 3]] = copiedInstructions[copiedInstructions[i + 1]] * copiedInstructions[copiedInstructions[i + 2]];
        } else {
          break;
        }
      }
      if (copiedInstructions[0] == target) {
        cout << 100 * input1 + input2 << endl;
      }
    }
  }
}
