#include "LunaPark.h"
#include <iostream>
#include "Facility.h"
#include "Restaurent.h"
using namespace std;

int LunaPark::total_items = 0;

LunaPark::LunaPark() {
    facilities = nullptr;
    restaurents = nullptr;
    Fsize = 0;
    Rsize = 0;
}

LunaPark::~LunaPark() {
    for (int i = 0; i < Fsize; i++) {
        delete facilities[i];
    }
    delete[] facilities;
    for (int i = 0; i < Rsize; i++){
        delete restaurents[i];
    }
    delete[] restaurents;
}

void LunaPark::setFsize(const int f) {
    Fsize = f;
}

void LunaPark::setRsize(const int r) {
    Rsize = r;
}

void LunaPark::addFacility(Facility* f) {
    Facility** newf = new Facility*[Fsize + 1];
    for (int i = 0; i < Fsize; i++) {
        newf[i] = facilities[i];
    }
    newf[Fsize] = f;
    if (Fsize > 0) {
        delete[] facilities;
    }
    facilities = newf;
    Fsize++;
    total_items++;
}

void LunaPark::addRestaurent(Restaurent* r) {
    Restaurent** newr = new Restaurent*[Rsize + 1];
    for (int i = 0; i < Rsize; i++) {
        newr[i] = restaurents[i];
    }
    newr[Rsize] = r;
    if (Rsize > 0) {
        delete[] restaurents;
    }
    restaurents = newr;
    Rsize++;
    total_items++;
}

int LunaPark::staticsum() {
    return total_items;
}

bool LunaPark::RemoveFacility(long id) {
    int indexToRemove = -1;
    for (int i = 0; i < Fsize; i++) {
        if (facilities[i]->get_f_id() == id) {
            indexToRemove = i;
            break;
        }
    }

    if (indexToRemove == -1) {
        return false;
    }

    delete facilities[indexToRemove];
    total_items--;

    if (Fsize == 1) {
        delete[] facilities;
        facilities = nullptr;
        Fsize = 0;
        return true;
    }
    Facility** newf = new Facility*[Fsize - 1];
    int j = 0;
    for (int i = 0; i < Fsize; i++) {
        if (i == indexToRemove) {
            continue;
        }
        newf[j] = facilities[i];
        j++;
    }
    delete[] facilities;
    facilities = newf;
    Fsize--;
    return true;
}

bool LunaPark::RemoveRestaurent(long id) {
    int indexToRemove = -1;
    for (int i = 0; i < Rsize; i++) {
        if (restaurents[i]->get_r_id() == id) {
            indexToRemove = i;
            break;
        }
    }

    if (indexToRemove == -1) {
        return false;
    }

    delete restaurents[indexToRemove];
    total_items--;

    if (Rsize == 1) {
        delete[] restaurents;
        restaurents = nullptr;
        Rsize = 0;
        return true;
    }

    Restaurent** newr = new Restaurent*[Rsize - 1];
    int j = 0;
    for (int i = 0; i < Rsize; i++) {
        if (i == indexToRemove) {
            continue;
        }
        newr[j] = restaurents[i];
        j++;
    }

    delete[] restaurents;
    restaurents = newr;
    Rsize--;
    return true;
}

void LunaPark::printall() const {
    cout << "All Our Restaurents:" << endl;
    for (int i = 0; i < Rsize; i++) {
        cout << *restaurents[i] << endl;
    }
    cout << "All Our Facilities:" << endl;
    for (int i = 0; i < Fsize; i++) {
        cout << *facilities[i] << endl;
    }
}

Restaurent* LunaPark::getRestaurentAt(int index) const {
    if (index < 0 || index >= Rsize) {
        return nullptr;
    }
    return restaurents[index];
}

Facility* LunaPark::getFacilityAt(int index) const {
    if (index < 0 || index >= Fsize) {
        return nullptr;
    }
    return facilities[index];
}