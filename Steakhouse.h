#ifndef P_STEAKHOUSE_H
#define P_STEAKHOUSE_H
#include "Restaurent.h"

enum DONENESS { RARE = 1, MEDIUM, WELL_DONE };

class Steakhouse : public Restaurent {
private:
    DONENESS type;
    static int s_count;
public:
    void print(std::ostream& os) const override;
    Steakhouse(string s_name, int s_cap, double s_area, DONENESS s_type);
    ~Steakhouse() override;
    DONENESS getDoneness() const;
};

#endif //P_STEAKHOUSE_H