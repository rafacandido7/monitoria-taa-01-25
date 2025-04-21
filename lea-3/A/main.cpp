#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int countStones(string raw_stones) {
  stack<char> stones;

  int stones_quantity = 0;

  for (const char rock: raw_stones) {

    if (rock == '<') {
      stones.push(rock);
    } else if (rock == '>' && !stones.empty()) {
      stones.pop();

      stones_quantity += 1;
    }
  }

  return stones_quantity;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  string raw_stones;

  for (int i = 0; i < n; i++) {
    cin >> raw_stones;

    int stones_quantity = countStones(raw_stones);

    cout << stones_quantity << '\n';
  }

  return 0;
}
