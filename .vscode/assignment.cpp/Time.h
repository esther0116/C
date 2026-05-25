#ifndef TIME_H
#define TIME_H

class Time{
    private:
    int hour;
    int minute;
    int second;

    public:
    void printTime();
    void setTime(int Hour,int Minute,int Second);
};
#endif