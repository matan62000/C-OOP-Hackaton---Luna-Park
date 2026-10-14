#ifndef FINAL_LUNAPARK_H
#define FINAL_LUNAPARK_H
#include "Facility.h"
#include "Restaurent.h"

class LunaPark {
private:
    int Fsize;
    int Rsize;
    Facility** facilities;
    Restaurent** restaurents;
    static int total_items;
public:
    LunaPark();
    ~LunaPark();

    void setFsize(int f);
    void setRsize(int r);
    void addFacility(Facility *f);
    void addRestaurent(Restaurent *r);
    bool RemoveFacility(long id);
    bool RemoveRestaurent(long id);
    static int staticsum();
    void printall() const;
    Restaurent* getRestaurentAt(int index) const;
    Facility* getFacilityAt(int index) const;
};

#endif //FINAL_LUNAPARK_H