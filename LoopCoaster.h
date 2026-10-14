//
// Created by omerg on 17/09/2026.
//

#ifndef FINAL_PROJECT_B_LOOPCOASTER_H
#define FINAL_PROJECT_B_LOOPCOASTER_H
#include "Coaster.h"
#include <iostream>
using namespace std;

class LoopCoaster: public Coaster
{
private:
    int loops;
    static int lc_count;
public:
    LoopCoaster(const string& n, int cap, double t, double s, double l, int loop);
    ~LoopCoaster() override;
    int get_loops() const;
    void print(std::ostream& os) const override;};


#endif //FINAL_PROJECT_B_LOOPCOASTER_H