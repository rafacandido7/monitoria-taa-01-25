#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long F, D;

  cin >> F >> D;

  double sum = 0;
  double mean = 0;

  queue<ll> subs;

  ll subscribers = 0;
  for (int i = 0; i < 30; i++) {
    cin >> subscribers;
    subs.push(subscribers);
    sum += subscribers;
  }

  ll new_subscribers = F;
  for (int i = 0; i < D; i++) {
    mean = ceil(sum/30);
    sum += mean;
    sum -= subs.front();

    subs.pop();
    subs.push(mean);

    new_subscribers += mean;
  }

  cout << new_subscribers << '\n';

  return 0;
}
