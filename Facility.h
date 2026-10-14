#ifndef FINAL_PROJECT_B_FACILITY_H
#define FINAL_PROJECT_B_FACILITY_H
#include <iostream>
using namespace std;

class Facility
{
protected:
    long f_id;
    int f_cap;
    string f_name;
    static int f_count;
public:
    Facility(const string& n, int cap);
    virtual ~Facility()=0;
    virtual long get_f_id() const;
    virtual int get_f_cap() const;
    virtual string get_f_name() const;
    virtual void print(std::ostream& os) const = 0;

    static int get_f_count() {
        return f_count;
    }

    friend std::ostream& operator<<(std::ostream& os, const Facility& f) {
        f.print(os);
        return os;
    }
};

#endif //FINAL_PROJECT_B_FACILITY_H