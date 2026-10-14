#include "GhostCoaster.h"
#include <iostream>
using namespace std;

int GhostCoaster::gc_count = 0;

GhostCoaster::GhostCoaster(const string& n, const int cap, const double t, const double s, const double l, const int j_s)
    : Coaster(n, cap, t, s, l) {
    jump_scare = j_s;
    c_count++;
    gc_count++;
}

GhostCoaster::~GhostCoaster() {
    c_count--;
    gc_count--;
}

int GhostCoaster::get_jump_scare() const {
    return jump_scare;
}

void GhostCoaster::print(std::ostream& os) const {
    os << "ID: " << f_id << "."
       << "\nName: "<< f_name << "."
       << "\nCapacity: " << f_cap << "."
       << "\nTime: " << time << " sec."
       << "\nSpeed: " << speed << " km/h."
       << "\nLength: " << length << " meters."
       << "\nNumber of jump_scares: " << jump_scare << ".";
}