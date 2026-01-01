#include <iostream>
#include <thread>
#include <chrono>
#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

// Function to change text color (Windows)
void setColor(int color) {
#ifdef _WIN32
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
#endif
}

void fireworks() {
    string fire[] = {
        "        *",
        "      *   *",
        "    *   *   *",
        "      *   *",
        "        *"
    };

    for (int i = 0; i < 3; i++) {
        for (int color = 9; color <= 14; color++) {
            system("cls");
            setColor(color);
            for (auto &line : fire)
                cout << line << endl;
            this_thread::sleep_for(chrono::milliseconds(200));
        }
    }
}

int main() {
    setColor(11);
    cout << "\n🎆 COUNTDOWN TO NEW YEAR 🎆\n\n";

    for (int i = 5; i >= 1; i--) {
        setColor(14);
        cout << "        " << i << endl;
        this_thread::sleep_for(chrono::seconds(1));
        system("cls");
    }

    fireworks();

    setColor(10);
    cout << "\n=================================\n";
    cout << "       🎉 HAPPY NEW YEAR 2026 🎉\n";
    cout << "=================================\n\n";

    setColor(11);
    cout << "Wishing you success, code & happiness!\n";
    cout << "— Muhammad Mahad Niaz 🚀\n";

    setColor(7); // Reset color
    return 0;
}
