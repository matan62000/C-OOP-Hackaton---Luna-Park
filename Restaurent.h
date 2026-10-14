#ifndef RESTAURENT_H
#define RESTAURENT_H
#include <iostream>
#include <string>
using namespace std;

class Restaurent {
protected:
    long r_id;
    int r_cap;
    string r_name;
    double r_area;
    static int r_count;
public:
    Restaurent(string name, int cap, double area);
    virtual ~Restaurent() = 0;
    long get_r_id() const;
    int get_r_cap() const;
    string get_r_name() const;
    double get_area() const;
    virtual void print(std::ostream& os) const = 0;

    static int get_r_count() {
        return r_count;
    }

    friend std::ostream& operator<<(std::ostream& os, const Restaurent& r) {
        r.print(os);
        return os;
    }
};

#endif // RESTAURENT_H