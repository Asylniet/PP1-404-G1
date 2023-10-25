#include <iostream>
using namespace std;

int main() {
    int w, h, n;
    cin >> w >> h >> n;
    bool canvas[w][h];
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            canvas[i][j] = false;
        }
    }

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                canvas[x][y] = true;
            }
        }
    }

    int unpainted_area = 0;
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            if (!canvas[i][j]) {
                unpainted_area++;
            }
        }
    }

    cout << unpainted_area << endl;

    return 0;
}

