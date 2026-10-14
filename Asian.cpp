#include "Asian.h"
#include <iostream>
using namespace std;

int Asian::a_count = 0;

void Asian::print(std::ostream& os) const {
    os << "ID: " << r_id
       << ", Name: " << r_name
       << ", Capacity: " << r_cap
       << ", Area: " << r_area << " sqm"
       << ", Spiciness: " << type;
}

Asian::Asian(string a_name, int a_cap, double a_area, SPICINESS a_type)
    : Restaurent(a_name, a_cap, a_area), type(a_type) {
    a_count++;
}

Asian::~Asian() {
    cout << "Asian Destroyed" << endl;
}

SPICINESS Asian::getSpiciness() const {
    return type;
}