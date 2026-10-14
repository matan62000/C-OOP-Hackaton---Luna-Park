#include "Coaster.h"

int Coaster::c_count = 0;

Coaster::Coaster(const string& n, int cap, double t, double s, double l)
    : Facility(n, cap), time(t), speed(s), length(l) {
    c_count++;
}

Coaster::~Coaster() {
    c_count--;
}

double Coaster::get_time() const {
    return time;
}

double Coaster::get_speed() const {
    return speed;
}

double Coaster::get_length() const {
    return length;
}