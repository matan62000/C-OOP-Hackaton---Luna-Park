//
// Created by omerg on 17/09/2026.
//

#ifndef FINAL_PROJECT_B_FERRISWHEEL_H
#define FINAL_PROJECT_B_FERRISWHEEL_H
#include "Facility.h"
#include <iostream>
using namespace std;

class FerrisWheel : public Facility
{
private:
    int diameter;
    double time;
    static int fw_count;
public:
    FerrisWheel(const string& n, int cap, int d, double t);
    ~FerrisWheel() override;
    int get_diameter() const;
    double get_time() const;
    void print(std::ostream &os) const override;
};


#endif //FINAL_PROJECT_B_FERRISWHEEL_H