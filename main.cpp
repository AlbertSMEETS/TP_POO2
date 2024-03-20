#include <iostream>
#include "Form.h"
#include "cmake-build-debug/SecDuration.h"
#include "cmake-build-debug/FullDuration.h"



int main() {
    SecDuration* a = new SecDuration;
    FullDuration* b = new FullDuration;
    *b = a->convertion_to_FD();
    int days, hours,minutes, seconds;
    days = b->GetDays();
    hours = b->GetHours();
    minutes = b->GetMinutes();
    seconds = b->GetSeconds();

    printf("%d\n",days);
    printf("%d\n",hours);
    printf("%d\n",minutes);
    printf("%d\n",seconds);


















    //Forme
    /*Form form{90,120,98};
    Form form_vide{};


    int result = form.compute();
    Form::displayResult(result);

    //int result_vide = form_vide.compute();
    //Form::displayResult(result_vide);

    form_vide.setf0(10);
    form_vide.setf1(20);
    form_vide.setf2(30);

    form_vide.show();*/
    return 0;
}
