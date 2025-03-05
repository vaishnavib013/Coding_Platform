#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int X,Y;
    cin >> X >> Y;
if (X < 1 || X > 10 || Y < 1 || Y > 10) {
        return 0;
}


    int restStops = (Y % X == 0) ? (Y / X) - 1 : Y / X;

    cout << restStops << endl;
    return 0;
}