#include "Restaurent.h"

static long global_restaurent_id_counter = 0;
int Restaurent::r_count = 0;

Restaurent::Restaurent(string name, int cap, double area)
    : r_name(name), r_cap(cap), r_area(area) {
    r_count++;
    global_restaurent_id_counter++;
    r_id = global_restaurent_id_counter;
}

Restaurent::~Restaurent() {
    r_count--;
    cout << "Restaurent Destroyed" << endl;
}

long Restaurent::get_r_id() const {
    return r_id;
}

int Restaurent::get_r_cap() const {
    return r_cap;
}

string Restaurent::get_r_name() const {
    return r_name;
}

double Restaurent::get_area() const {
    return r_area;
}