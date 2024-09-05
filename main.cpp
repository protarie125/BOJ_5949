#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
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

using ll = int64_t;
using vl = vector<ll>;

string n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  reverse(n.begin(), n.end());

  auto oss = ostringstream{};
  auto v = 0;
  for (const auto& x : n) {
    if (3 == v) {
      oss << ',';
      v = 0;
    }
    oss << x;
    ++v;
  }

  auto ans = static_cast<string>(oss.str());
  reverse(ans.begin(), ans.end());

  cout << ans;

  return 0;
}