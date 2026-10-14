#include "BumperCars.h"

int BumperCars::bc_count = 0;

BumperCars::BumperCars(const string& n, int cap, double a) : Facility(n, cap) {
    area = a;
    bc_count++;
}

BumperCars::~BumperCars() {
    bc_count--;
}

double BumperCars::get_area() const {
    return area;
}

void BumperCars::print(std::ostream &os) const {
    os << "ID: " << f_id << "."
       << "\nName: "<< f_name << "."
       << "\nCapacity: " << f_cap << "."
       << "\nArea: " << area << " sqm.";
}