#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n) {
    while (n > 0) {
        int d = n % 10;
        if (d != 4 && d != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;

    vector<int> lucky;

    for (int i = A; i <= B; i++) {
        if (isLucky(i))
            lucky.push_back(i);
    }

    if (lucky.empty()) {
        cout << -1;
    } else {
        for (int x : lucky) cout << x << " ";
    }

    return 0;
}
