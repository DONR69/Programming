#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> a;

    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;

        a.insert(t);

        int j = 0;

        set<int> b;

        for (auto it = a.cbegin(); it != a.cend() && j < 5; ++it, ++j)
            b.insert(*it);

        copy(b.crbegin(), b.crend(), ostream_iterator<int>(cout, " "));

        cout << '\n';
    }
}