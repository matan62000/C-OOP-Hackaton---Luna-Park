//
// Created by omerg on 17/09/2026.
//

#ifndef FINAL_PROJECT_B_BUMPERCARS_H
#define FINAL_PROJECT_B_BUMPERCARS_H
#include "Facility.h"
#include <iostream>
using namespace std;

class BumperCars : public Facility
{
private:
    double area;
    static int bc_count;
public:
    BumperCars(const string& n, int cap, double a);
    ~BumperCars() override;
    double get_area() const;
    void print(std::ostream &os) const override;};


#endif //FINAL_PROJECT_B_BUMPERCARS_H