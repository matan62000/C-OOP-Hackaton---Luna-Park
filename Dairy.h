#ifndef P_DAIRY_H
#define P_DAIRY_H
#include "Restaurent.h"


class Dairy: public Restaurent {
private:
    int cheese_types_count;
    static int d_count;
public:
    friend ostream &operator<<(std::ostream &os, const Dairy &d);
    Dairy(string d_name,int d_cap,double d_area,int d_cheese_types_count);
    virtual ~Dairy();
    int get_cheese_types_count()const;
    void print(std::ostream& os) const override;
};


#endif //P_DAIRY_H