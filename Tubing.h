#ifndef FINAL_TUBING_H
#define FINAL_TUBING_H
#include "Facility.h"
#include <string>


class Tubing : public Facility {
private:
    double length;
    double speed;
    static int t_count;
public:
    Tubing(std::string name, int capacity, double length, double speed);
    ~Tubing() override;

    double getLength() const;
    double getSpeed() const;
    void print(std::ostream& os) const override;
};


#endif //FINAL_TUBING_H
