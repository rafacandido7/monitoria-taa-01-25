#include <bits/stdc++.h>

using namespace std;

using ll = long long;

queue<string> organizeFlights(queue<string> n, queue<string> s, queue<string> e, queue<string> o) {
  queue<string> organized;

  while(!(n.empty() && s.empty() && e.empty() && o.empty())) {
    if(!n.empty()) {
      organized.push(n.front());
      n.pop();
    }

    if(!s.empty()) {
      organized.push(s.front());
      s.pop();
    }

    if(!e.empty()) {
      organized.push(e.front());
      e.pop();
    }

    if(!o.empty()) {
      organized.push(o.front());
      o.pop();
    }
  }

  return organized;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  char dir;

  queue<string> north, south, east, weast;
  string flight;

  cin >> dir;
  while (dir != '0') {
    while (dir == 'N') {
      cin >> flight;
      if (flight[0] == 'B') {
        north.push(flight);
      } else {
        dir = flight[0];
      }
    }

    while (dir == 'S') {
      cin >> flight;
      if (flight[0] == 'B') {
        south.push(flight);
      } else {
        dir = flight[0];
      }
    }

    while (dir == 'L') {
      cin >> flight;
      if (flight[0] == 'B') {
        east.push(flight);
      } else {
        dir = flight[0];
      }
    }

    while (dir == 'O') {
      cin >> flight;
      if (flight[0] == 'B') {
        weast.push(flight);
      } else {
        dir = flight[0];
      }
    }
  }

  queue<string> org = organizeFlights(north, south, east, weast);

  while (!org.empty()) {
    cout << org.front();
    org.pop();

    if (!org.empty()) {
      cout << ' ';
    } else {
      cout << '\n';
    }
  }

  return 0;
}
