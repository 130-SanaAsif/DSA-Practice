#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int R;
    cin >> R;

    vector<int> markers(R);

    for (int i = 0; i < R; i++) {
        cin >> markers[i];
    }

    sort(markers.begin(), markers.end(), greater<int>());

    int total_points = 0;
    int currentPlayer = 0;

    for (int i = 0; i < R; i++) {
        if (currentPlayer == 0) {
            total_points += markers[i];
        }

        currentPlayer = (currentPlayer + 1) % 2;
    }

    cout << total_points << endl;

    return 0;
}
