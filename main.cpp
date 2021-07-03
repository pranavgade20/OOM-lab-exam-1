#include <iostream>

#include "AirConditioner.h"
#include "Freezer.h"

using namespace std;
int main() {
    Freezer freezer; // create a freezer
    AirConditioner airConditioner; // create an air conditioner

    int opt = 0;
    do { // the event loop - gives the user options to interact with the freezer and air conditioner
        cout << "\n0. Exit\n"
                "1. Set Air Condition required temperature\n"
                "2. Set Air Condition current temperature\n"
                "3. Set Freezer current temperature\n"
                "4. Plug in freezer\n"
                "5. Plug out freezer\n"
                "Enter choice: " << flush;
        cin >> opt;

        switch (opt) {
            float temp;
            case 1:
                cout << "Enter required temperature: " << flush;
                cin >> temp;
                airConditioner.setRequiredTemp(temp);
                break;
            case 2:
                cout << "Enter current temperature: " << flush;
                cin >> temp;
                airConditioner.setCurrentTemp(temp);
                break;
            case 3:
                cout << "Enter current temperature: " << flush;
                cin >> temp;
                freezer.setCurrentTemp(temp);
                break;
            case 4:
                freezer.plug_in();
                break;
            case 5:
                freezer.plug_out();
                break;
        }
    } while (opt != 0);
    return 0;
}
