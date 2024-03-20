#ifndef TP2_POO_SECDURATION_H
#define TP2_POO_SECDURATION_H

class FullDuration;

class SecDuration {
private:
    int seconds, days, hours, minutes;

public:
    SecDuration();
    void SetSeconds(int s);
    int GetSeconds();
    void AddSeconds(int s);

    void SetMinutes(int m);
    int GetMinutes();
    void AddMinutes(int m);

    void SetHours(int h);
    int GetHours();
    void AddHours(int h);

    void SetDays(int d);
    int GetDays();
    void AddDays(int d);
    FullDuration convertion_to_FD();

};





#endif //TP2_POO_SECDURATION_H
