#ifndef P_ASIAN_H
#define P_ASIAN_H
#include "Restaurent.h"

enum SPICINESS { NONE = 1, MILD, SPICY, EXTRA_SPICY };

class Asian : public Restaurent {
private:
    SPICINESS type;
    static int a_count;
public:
    void print(std::ostream& os) const override;
    Asian(string a_name, int a_cap, double a_area, SPICINESS a_type);
    SPICINESS getSpiciness() const;
    virtual ~Asian();
};

#endif //P_ASIAN_H