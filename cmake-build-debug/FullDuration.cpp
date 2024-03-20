
#include "FullDuration.h"
#include "SecDuration.h"


//Constructeur par défaut donnant 0 a tout les paramètres
FullDuration::FullDuration() :days(0), hours(0), minutes(0), seconds(0){

}

SecDuration FullDuration::convertion_to_SD() {
    SecDuration* sDo = new SecDuration(); //SecDuration object
    int days_clone = days;
    while(days_clone>0){
        sDo->AddSeconds(86400);
        days_clone=-1;
    }

    int hours_clone = hours;
    while(hours_clone>0){
        sDo->AddSeconds(3600);
        hours_clone=-1;
    }

    int minutes_clone = minutes;
    while(minutes_clone>0){
        sDo->AddSeconds(60);
        minutes_clone=-1;
    }

    sDo->AddSeconds(seconds); //A completer avec les secondes de SecDuration
    return *sDo;
}

void FullDuration::SetSeconds(int s) {
    seconds = s;

}

int FullDuration::GetSeconds() {
    return seconds;
}

void FullDuration::AddSeconds(int s) {
    seconds += s;

}
void FullDuration::SetMinutes(int m) {
    minutes = m;

}

int FullDuration::GetMinutes() {
    return minutes;
}

void FullDuration::AddMinutes(int m) {
    minutes += m;

}
void FullDuration::SetHours(int h) {
    hours= h;

}

int FullDuration::GetHours() {
    return hours;
}

void FullDuration::AddHours(int h) {
    hours += h;

}
void FullDuration::SetDays(int d) {
    days = d;

}

int FullDuration::GetDays() {
    return days;
}

void FullDuration::AddDays(int d) {
    days += d;

}