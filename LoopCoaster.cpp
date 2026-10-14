#include "LoopCoaster.h"
#include <iostream>
using namespace std;

int LoopCoaster::lc_count = 0;

LoopCoaster::LoopCoaster(const string& n, const int cap, const double t, const double s, const double l, const int loop)
    : Coaster(n, cap, t, s, l) {
    loops = loop;
    c_count++;
    lc_count++;
}

LoopCoaster::~LoopCoaster() {
    c_count--;
    lc_count--;
}

int LoopCoaster::get_loops() const {
    return loops;
}

void LoopCoaster::print(std::ostream& os) const {
    os << "ID: " << f_id << "."
       << "\nName: "<< f_name << "."
       << "\nCapacity: " << f_cap << "."
       << "\nTime: " << time << " sec."
       << "\nSpeed: " << speed << " km/h."
       << "\nLength: " << length << " meters."
       << "\nNumber of loops: " << loops << ".";
}