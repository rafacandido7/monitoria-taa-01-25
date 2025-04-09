#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long A, Q;

  cin >> A >> Q;

  vector<long long> notas;

  long long n;

  for (long long i = 0; i < A; i++) {
    cin >> n;
    notas.push_back(n);
  }

  sort(notas.begin(), notas.end());

  long long search;
  for (int i = 0; i < Q; i++)  {
    cin >> search;

    auto it = upper_bound(notas.begin(), notas.end(), search);

    long long dist = distance(it, notas.end());

    cout << dist << " notas maiores que " << search << "\n";
  }

  return 0;
}
