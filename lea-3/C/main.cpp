#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;

  queue<int> cards;

  for (int i = N; i > 0; i--) {
    cards.push(i);
  }

  vector<int> released_cards;

  while (cards.size() > 1) {
    released_cards.push_back(cards.front());
    cards.pop();

    cards.push(cards.front());
    cards.pop();
  }

  cout << "Descarte:";
  for (int i = 0; i < released_cards.size(); ++i) {
    cout << " ";
    cout << released_cards[i];

    if (i != released_cards.size() - 1) {
      cout << ",";
    }
  }

  cout << '\n';

  cout << "Ultima carta: " << cards.front() << '\n';

  return 0;
}
