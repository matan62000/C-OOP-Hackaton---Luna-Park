#include "FerrisWheel.h"

int FerrisWheel::fw_count = 0;

FerrisWheel::FerrisWheel(const string& n, int cap, int d, double t) : Facility(n, cap) {
    diameter = d;
    time = t;
    fw_count++;
}

FerrisWheel::~FerrisWheel() {
    fw_count--;
}

int FerrisWheel::get_diameter() const {
    return diameter;
}

double FerrisWheel::get_time() const {
    return time;
}

void FerrisWheel::print(std::ostream &os) const {
    os << "ID: " << f_id << "."
       << "\nName: "<< f_name << "."
       << "\nCapacity: " << f_cap << "."
       << "\nTime: " << time << " sec."
       << "\nDiameter: " << diameter << " meters.";
}