#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
using namespace std;
#include <iomanip> // for std::setfill and std::setw

class Time {

private:
    int hour;
    int minute;
public:
    Time(int h,int m);
    Time(const Time & other) {
    minute = other.minute;
    hour = other.hour;
    cout<< "copy constructor called"<< endl;
    }; //copy constructor
    void display_time();
    void decrement_minute();
    void increment_minute();
    void set_minute(int m);
    int get_minute();
    void set_hour(int h);
    int get_hour();

};

// TÝME ZONE
class TimeZone:public Time {

private:
    int time_zone;
public:
    TimeZone(int h, int m, int t);
    TimeZone(const TimeZone & other):Time(other.get_hour(), other.get_minute()) {
    time_zone = other.time_zone;
    }
    void change_time_zone(int new_value);
    void get_time_zone() ;
    void display_time_and_time_zone();
    void change_time_when_zone_changed(int f,int t);

};


#endif // HEADER_H_INCLUDED
