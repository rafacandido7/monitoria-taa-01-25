#include <bits/stdc++.h>
using namespace std;

using ld = long double;

ld solve(int A, int B, int C) {
  ld left = 0;
  ld right = C + B;
  ld mid;

  while (right - left > 1e-7) {
    mid = (left + right) / 2.0;
    ld func = A * mid + B * sin(mid);

    if (func < C) {
      left = mid;
    } else {
      right = mid;
    }
  }

  return mid;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int A, B, C;
  cin >> A >> B >> C;

  ld x = solve(A, B, C);

  cout << fixed << setprecision(4) << x << '\n';

  return 0;
}
