#include "Tubing.h"
#include <iostream>
using namespace std;

int Tubing::t_count = 0;

Tubing::Tubing(string name, int capacity, double length, double speed)
    : Facility(name, capacity), length(length), speed(speed) {
    t_count++;
}

Tubing::~Tubing() {
    cout << "Tubing::~Tubing" << endl;
}

double Tubing::getLength() const {
    return length;
}

double Tubing::getSpeed() const {
    return speed;
}

void Tubing::print(std::ostream& os) const {
    os << "ID: " << f_id << "."
       << "\nName: "<< f_name << "."
       << "\nCapacity: " << f_cap << "."
       << "\nSpeed: " << speed << " km/h."
       << "\nLength: " << length << " meters.";
}