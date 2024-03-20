//
// Created by asmeets on 08/02/2024.
//

#ifndef TP2_POO_FORM_H
#define TP2_POO_FORM_H


class Form {
protected:
    int f0;
    int f1;
    int f2;
public:
    Form(int f0,int f1, int f2);
    int compute();
    static void displayResult(int result);
    Form();

    void setf0(int f0);
    void setf1(int f1);
    void setf2(int f2);

    void show();


};

#endif //TP2_POO_FORM_H
