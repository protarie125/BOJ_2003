#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n, m;
vl A;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> m;
  A = vl(n);
  for (auto&& a : A) {
    cin >> a;
  }

  auto i = 0;
  auto j = 0;
  auto sum = A[0];
  auto ans = ll{0};
  while (i < n && j < n) {
    if (sum < m) {
      ++j;
      if (n == j) {
        break;
      }

      sum += A[j];
    } else if (sum == m) {
      ++ans;
      sum -= A[i];
      ++i;
    } else {
      sum -= A[i];
      ++i;
    }
  }

  cout << ans;

  return 0;
}