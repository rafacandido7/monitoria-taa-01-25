#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool comparePlayers(const pair<string, string>& player1, const pair<string, string>& player2) {
  if (player1.second != player2.second) {
    return player1.second > player2.second;
  }

  return player1.first > player2.first;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll n;
  cin >> n;

  string nick, time;
  vector<pair<string, string> > players;

  for (ll i = 0; i < n; i++) {
    cin >> nick >> time;
    players.push_back(make_pair(nick, time));
  }

  sort(players.begin(), players.end(), comparePlayers);

  for (long long i = 0; i < n; i ++) {
    cout << i+1 << ". " << players[i].second << " - " << players[i].first <<"\n";
  }

  return 0;
}
