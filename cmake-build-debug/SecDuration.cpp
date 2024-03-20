#include "SecDuration.h"
#include "FullDuration.h"


//Constructeur par défaut donnant 0 a tout les paramètres
SecDuration::SecDuration(): seconds(9000){

}

void SecDuration::SetSeconds(int s) {
    seconds = s;

}

int SecDuration::GetSeconds() {
    return seconds;
}

void SecDuration::AddSeconds(int s) {
    seconds += s;

}

FullDuration SecDuration::convertion_to_FD() {
    FullDuration* fDo = new FullDuration(); //FullDuration object
    int seconds_clone = seconds;
    while(seconds_clone>59){
        fDo->AddMinutes(1);
        seconds_clone=seconds_clone-60;
    }
    int minutes_clone = fDo->GetMinutes();
    while(minutes_clone>59){
        fDo->AddHours(1);
        minutes_clone=minutes_clone-60;
    }

    int hours_clone = fDo->GetHours();
    while(hours_clone>23){
        fDo->AddDays(1);
        hours_clone=hours_clone-24;
    }

    fDo->AddSeconds(seconds);
    return *fDo;
}

void SecDuration::SetMinutes(int m) {
    minutes = m;

}

int SecDuration::GetMinutes() {
    return minutes;
}

void SecDuration::AddMinutes(int m) {
    minutes += m;

}
void SecDuration::SetHours(int h) {
    hours= h;

}

int SecDuration::GetHours() {
    return hours;
}

void SecDuration::AddHours(int h) {
    hours += h;

}
void SecDuration::SetDays(int d) {
    days = d;

}

int SecDuration::GetDays() {
    return days;
}

void SecDuration::AddDays(int d) {
    days += d;

}


