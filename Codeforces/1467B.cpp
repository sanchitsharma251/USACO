#include <iostream>
#include <algorithm>
using namespace std;

const int maxN = 3e5;

bool isHill(int N, int A[], int i) {
  return (i >= 1 && i < N - 1 && A[i] > A[i - 1] && A[i] > A[i + 1]); 
}

bool isValley(int N, int A[], int i) {
  return (i >= 1 && i < N - 1 && A[i] < A[i - 1] && A[i] < A[i + 1]); 
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N; cin >> N;
    int A[N]; for (int i = 0; i < N; i++) cin >> A[i];

    if (N <= 2) {
      cout << 0 << endl;
      continue;
    }

    int maximum_changes = 0;
    int num_of_hills_valleys = 0;
    for (int i = 1; i < N - 1; i++) {
      int a = A[i - 1];
      int b = A[i];
      int c = A[i + 1];

      if (isHill(N, A, i) || isValley(N, A, i)) {
        int changes = 0;
        num_of_hills_valleys++;
        bool right = (isHill(N, A, i + 1) || isValley(N, A, i + 1));
        bool left = (isHill(N, A, i - 1) || isValley(N, A, i - 1));

        A[i] = a;
        
        if (right && (!(isHill(N, A, i + 1) || isValley(N, A, i + 1)))) changes++;
        if (!right && (isHill(N, A, i + 1) || isValley(N, A, i + 1))) changes--;
        if (left && (!(isHill(N, A, i - 1) || isValley(N, A, i - 1)))) changes++;
        if (!left && ((isHill(N, A, i - 1) || isValley(N, A, i - 1)))) changes--;
        if (!(isHill(N, A, i) || isValley(N, A, i))) changes++;

        maximum_changes = max(maximum_changes, changes);

        changes = 0;
        A[i] = c;

        if (right && (!(isHill(N, A, i + 1) || isValley(N, A, i + 1)))) changes++;
        if (!right && (isHill(N, A, i + 1) || isValley(N, A, i + 1))) changes--;
        if (left && (!(isHill(N, A, i - 1) || isValley(N, A, i - 1)))) changes++;
        if (!left && ((isHill(N, A, i - 1) || isValley(N, A, i - 1)))) changes--;
        if (!(isHill(N, A, i) || isValley(N, A, i))) changes++;
      
        maximum_changes = max(maximum_changes, changes);
        A[i] = b;
      }
    }

    cout << num_of_hills_valleys - maximum_changes << "\n";

  }
}
