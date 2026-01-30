#include <iostream>
using namespace std;

class TimeConverter {
public:
    void convert() {
        int h, m, s, totalSeconds;

        cout << "Enter hours: ";
        cin >> h;

        cout << "Enter minutes: ";
        cin >> m;

        cout << "Enter seconds: ";
        cin >> s;

        totalSeconds = (h * 3600) + (m * 60) + s;

        cout << "Total seconds: " << totalSeconds << endl;
    }
};

int main() {
    TimeConverter tc;
    tc.convert();
    return 0;
}