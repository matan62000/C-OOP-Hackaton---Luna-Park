#ifndef FINAL_PROJECT_B_GHOSTCOASTER_H
#define FINAL_PROJECT_B_GHOSTCOASTER_H
#include "Coaster.h"
#include <iostream>
using namespace std;

class GhostCoaster: public Coaster
{
private:
    int jump_scare;
    static int gc_count;
public:
    GhostCoaster(const string& n, int cap, double t, double s, double l, int j_s);
    ~GhostCoaster() override;
    int get_jump_scare() const;
    void print(std::ostream& os) const override;};


#endif //FINAL_PROJECT_B_GHOSTCOASTER_H