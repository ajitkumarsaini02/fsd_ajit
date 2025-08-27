#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int A = -1;
const int B = -4;
const int C = 1;

static bool cmp_quadratic(int x, int y) {
    int val_x = (int)A * x * x + (int)B * x + C;
    int val_y = (int)A * y * y + (int)B * y + C;
    return val_x < val_y;
}

int main() {
    vector<int> v{-3, -2, -1, 0, 2, 4};
    sort(v.begin(), v.end(), cmp_quadratic);
    
    for (int i : v) {
        cout << i << " ";
    }

    return 0;
}