//
// Created by omerg on 17/09/2026.
//

#ifndef FINAL_PROJECT_B_COASTER_H
#define FINAL_PROJECT_B_COASTER_H
#include "Facility.h"
#include <iostream>
using namespace std;

class Coaster: public Facility
{
protected:
    double time, speed, length;
    static int c_count;
public:
    Coaster(const string& n, int cap, double t, double s, double l);
    virtual ~Coaster()=0;
    virtual double get_time() const;
    virtual double get_speed() const;
    virtual double get_length() const;
};


#endif //FINAL_PROJECT_B_COASTER_H