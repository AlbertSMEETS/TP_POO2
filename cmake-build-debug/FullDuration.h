#ifndef TP2_POO_FULLDURATION_H
#define TP2_POO_FULLDURATION_H

class SecDuration;

class FullDuration {
private:
    int days,hours,minutes,seconds;



public:
    FullDuration();
    SecDuration convertion_to_SD();

    void SetSeconds(int s);
    int GetSeconds();
    void AddSeconds(int s);

    void SetMinutes(int s);
    int GetMinutes();
    void AddMinutes(int s);

    void SetHours(int s);
    int GetHours();
    void AddHours(int s);

    void SetDays(int s);
    int GetDays();
    void AddDays(int s);


};


#endif //TP2_POO_FULLDURATION_H
