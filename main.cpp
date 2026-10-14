/*315187773 matan buhbut
 322434622 Omer golan
 213242316 Daniel Edri*/

#include <iostream>
#include "LunaPark.h"
#include "Restaurent.h"
#include "Dairy.h"
#include "Steakhouse.h"
#include "Asian.h"
#include "Facility.h"
#include "Tubing.h"
#include "LoopCoaster.h"
#include "GhostCoaster.h"
#include "BumperCars.h"
#include "FerrisWheel.h"
using namespace std;

int main() {
    cout << "-----------Luna Park Program-----------" << endl;
    cout << "Today, our Luna Park is empty, we gonna build it together." << endl;

    LunaPark l;
    int chooser = 0;

    do {
        cout << "\nChoose from the next Menu:" << endl;
        cout << "1 - Add Facility\n2 - Add Restaurent\n3 - Print All\n4 - Static Sum\n5 - Remove Facility\n6 - Remove Restaurent\n7 - Get Restaurent By Index\n8 - Get Facility By Index\n9 - Quit" << endl;
        cin >> chooser;

        switch (chooser) {
            case 1: {
                string name;
                int capacity;
                cout << "Enter Facility's Name:" << endl;
                cin >> name;
                cout << "Enter Capacity:" << endl;
                cin >> capacity;

                cout << "Which Facility?" << endl;
                cout << "1 - Loop Coaster\n2 - Ghost Coaster\n3 - Tubing (River Ride)\n4 - Bumper Cars\n5 - Ferris Wheel" << endl;
                int facilityType;
                cin >> facilityType;

                switch (facilityType) {
                    case 1: {
                        cout << "Adding Loop Coaster..." << endl;
                        cout << "Enter 3 numeric parameters (time, speed, length):" << endl;
                        double t, s, len;
                        cin >> t >> s >> len;
                        cout << "Enter number of loops:" << endl;
                        int loops;
                        cin >> loops;

                        LoopCoaster* lc = new LoopCoaster(name, capacity, t, s, len, loops);
                        l.addFacility(lc);
                        break;
                    }
                    case 2: {
                        cout << "Adding Ghost Coaster..." << endl;
                        cout << "Enter 3 numeric parameters (time, speed, length):" << endl;
                        double t, s, len;
                        cin >> t >> s >> len;
                        cout << "Enter number of jump scares:" << endl;
                        int j_s;
                        cin >> j_s;

                        GhostCoaster* gc = new GhostCoaster(name, capacity, t, s, len, j_s);
                        l.addFacility(gc);
                        break;
                    }
                    case 3: {
                        cout << "Adding Tubing (River Ride)..." << endl;
                        cout << "Enter Speed:" << endl;
                        double speed;
                        cin >> speed;
                        cout << "Enter Length:" << endl;
                        double length;
                        cin >> length;

                        Tubing* tu = new Tubing(name, capacity, length, speed);
                        l.addFacility(tu);
                        break;
                    }
                    case 4: {
                        cout << "Adding Bumper Cars..." << endl;
                        cout << "Enter Area (sqm):" << endl;
                        double area;
                        cin >> area;

                        BumperCars* bc = new BumperCars(name, capacity, area);
                        l.addFacility(bc);
                        break;
                    }
                    case 5: {
                        cout << "Adding Ferris Wheel..." << endl;
                        cout << "Enter Diameter (meters):" << endl;
                        int diameter;
                        cin >> diameter;
                        cout << "Enter Time (sec):" << endl;
                        double time;
                        cin >> time;

                        FerrisWheel* fw = new FerrisWheel(name, capacity, diameter, time);
                        l.addFacility(fw);
                        break;
                    }
                    default:
                        cout << "Unknown facility type!" << endl;
                        break;
                }
                cout << "Facility added successfully!\n" << endl;
                break;
            }

            case 2: {
                string name2;
                int capacity2;
                double area;
                cout << "Enter Restaurent's Name:" << endl;
                cin >> name2;
                cout << "Enter Capacity:" << endl;
                cin >> capacity2;
                cout << "Enter Area:" << endl;
                cin >> area;

                cout << "Which Restaurent Type?" << endl;
                cout << "1 - Dairy\n2 - Meat\n3 - Asian" << endl;
                int restaurentType;
                cin >> restaurentType;

                switch (restaurentType) {
                    case 1: {
                        int cheeseTypes;
                        cout << "Enter number of cheese types:" << endl;
                        cin >> cheeseTypes;
                        Dairy* dr = new Dairy(name2, capacity2, area, cheeseTypes);
                        l.addRestaurent(dr);
                        break;
                    }
                    case 2: {
                        int donenessInput;
                        cout << "Enter Doneness (1 - Rare, 2 - Medium, 3 - Well Done):" << endl;
                        cin >> donenessInput;
                        DONENESS doneness = (DONENESS)donenessInput;
                        Steakhouse* mr = new Steakhouse(name2, capacity2, area, doneness);
                        l.addRestaurent(mr);
                        break;
                    }
                    case 3: {
                        int spicinessInput;
                        cout << "Enter Spiciness (1 - None, 2 - Mild, 3 - Spicy, 4 - Extra Spicy):" << endl;
                        cin >> spicinessInput;
                        SPICINESS spiciness = (SPICINESS)spicinessInput;
                        Asian* ar = new Asian(name2, capacity2, area, spiciness);
                        l.addRestaurent(ar);
                        break;
                    }
                    default:
                        cout << "Unknown restaurent type!" << endl;
                        break;
                }
                cout << "Restaurent added successfully!\n" << endl;
                break;
            }

            case 3:
                cout << "\n--- Displaying Luna Park Content ---" << endl;
                l.printall();
                break;

            case 4:
                cout << "\n--- Static Sum Result ---" << endl;
                cout << "Total items count: " << LunaPark::staticsum() << endl;
                break;

            case 5: {
                cout << "\n--- Remove Facility ---" << endl;
                long removeId;
                cout << "Enter Facility ID to remove:" << endl;
                cin >> removeId;

                if (l.RemoveFacility(removeId)) {
                    cout << "Facility with ID " << removeId << " removed successfully!\n" << endl;
                } else {
                    cout << "Error: Facility with ID " << removeId << " does not exist!\n" << endl;
                }
                break;
            }

            case 6: {
                cout << "\n--- Remove Restaurent ---" << endl;
                long removeId2;
                cout << "Enter Restaurent ID to remove:" << endl;
                cin >> removeId2;

                if (l.RemoveRestaurent(removeId2)) {
                    cout << "Restaurent with ID " << removeId2 << " removed successfully!\n" << endl;
                } else {
                    cout << "Error: Restaurent with ID " << removeId2 << " does not exist!\n" << endl;
                }
                break;
            }

            case 7: {
                cout << "\n--- Get Restaurent By Index ---" << endl;
                int index;
                cout << "Enter index (0-based, e.g., 3 for the 4th restaurent):" << endl;
                cin >> index;

                Restaurent* r = l.getRestaurentAt(index);
                if (r != nullptr) {
                    cout << "Found Restaurent details:" << endl;
                    cout << *r << endl;
                } else {
                    cout << "Error: Index out of bounds or no such restaurent!" << endl;
                }
                break;
            }

            case 8: {
                cout << "\n--- Get Facility By Index ---" << endl;
                int index;
                cout << "Enter index (0-based, e.g., 3 for the 4th facility):" << endl;
                cin >> index;

                Facility* f = l.getFacilityAt(index);
                if (f != nullptr) {
                    cout << "Found Facility details:" << endl;
                    cout << *f << endl;
                } else {
                    cout << "Error: Index out of bounds or no such facility!" << endl;
                }
                break;
            }

            case 9:
                cout << "Exiting program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please choose between 1 and 9." << endl;
                break;
        }

    } while (chooser != 9);

    return 0;
}