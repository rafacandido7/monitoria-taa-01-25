#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool validateExpression(string exp) {
  stack<char> stck;

  for (const char &ch : exp) {
    if (ch == '(' || ch == '[' || ch == '{') {
      stck.push(ch);
    }

    if (ch == ')' || ch == ']' || ch == '}') {
      if (stck.empty()) {
        return false;
      }

      char top = stck.top();
      stck.pop();

      if ((ch == ')' && top != '(') ||
          (ch == ']' && top != '[') ||
          (ch == '}' && top != '{')) {
        return false;
      }
    }
  }

  return stck.empty();
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string exp;
  cin >> exp;

  bool isValid = validateExpression(exp);

  if (isValid) {
    cout << "OK" << '\n';
  } else {
    cout << "SyntaxError" << '\n';
  }

  return 0;
}
