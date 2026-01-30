#include <iostream>
using namespace std;

class TimeConverter {
public:
    void convert() {
        int totalSeconds, hours, minutes, seconds;

        cout << "Enter total seconds: ";
        cin >> totalSeconds;

        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;

        cout << "HH:MM:SS => " << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    TimeConverter tc;
    tc.convert();
    return 0;
}