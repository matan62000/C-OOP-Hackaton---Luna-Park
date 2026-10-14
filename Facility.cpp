#include "Facility.h"

static long global_facility_id_counter = 0;

int Facility::f_count = 0;

Facility::Facility(const string& n, int cap) : f_name(n), f_cap(cap) {
    f_count++;
    global_facility_id_counter++;
    f_id = global_facility_id_counter;
}

Facility::~Facility() {
    f_count--;
}

long Facility::get_f_id() const {
    return f_id;
}

int Facility::get_f_cap() const {
    return f_cap;
}

string Facility::get_f_name() const {
    return f_name;
}