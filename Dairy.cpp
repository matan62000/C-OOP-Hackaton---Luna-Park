#include "Dairy.h"
#include "Restaurent.h"
int Dairy::d_count = 0;
void Dairy::print(std::ostream& os) const {
    os << "ID: " << r_id
       << ", Name: " << r_name
       << ", Capacity: " << r_cap
       << ", Area: " << r_area << " sqm"
       << ", Cheese Types: " << cheese_types_count;
}

Dairy::Dairy(string d_name,int d_cap,double d_area,int d_cheese_types_count):
    Restaurent(d_name,d_cap,d_area),cheese_types_count(d_cheese_types_count) {
    d_count++;
}
Dairy::~Dairy() {
    cout << "Dairy Destroyed" << endl;
}

int Dairy::get_cheese_types_count()const {
    return cheese_types_count;
}