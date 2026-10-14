#include "Steakhouse.h"
#include <iostream>
using namespace std;

int Steakhouse::s_count = 0;

void Steakhouse::print(std::ostream& os) const {
    os << "ID: " << r_id
       << ", Name: " << r_name
       << ", Capacity: " << r_cap
       << ", Area: " << r_area << " sqm"
       << ", Doneness: " << type;
}

Steakhouse::~Steakhouse() {
    cout << "Steakhouse Destroyed" << endl;
}

Steakhouse::Steakhouse(string s_name, int s_cap, double s_area, DONENESS s_doneness)
    : Restaurent(s_name, s_cap, s_area), type(s_doneness) {
    s_count++;
}

DONENESS Steakhouse::getDoneness() const {
    return type;
}