#include <iostream>
using namespace std;

int main() {
    int totalSeconds;
    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << hours << " hour(s), " << minutes << " minute(s), and " << seconds << " second(s)" << endl;

    return 0;
}
