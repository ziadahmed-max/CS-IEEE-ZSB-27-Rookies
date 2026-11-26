#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int x1, y1, x2, y2;
    int count = 0;

    for (int i = 0; i < H; i++) {
        string s;
        cin >> s;

        for (int j = 0; j < W; j++) {
            if (s[j] == 'o') {
                count++;

                if (count == 1) {
                    x1 = i;
                    y1 = j;
                }
                else {
                    x2 = i;
                    y2 = j;
                }
            }
        }
    }

    cout << abs(x1 - x2) + abs(y1 - y2) << endl;

    return 0;
}