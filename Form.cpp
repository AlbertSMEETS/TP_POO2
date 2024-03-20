//
// Created by asmeets on 08/02/2024.
//

#include <iostream>
#include "Form.h"

Form::Form(int _f0, int _f1, int _f2):f0(_f0),f1(_f1),f2(_f2) {}
Form::Form(){}

int Form::compute(){
    double result = 0.1*(f0 + f1 + f2 - 100);
    return result;
}

void Form::displayResult(int result){
    if(result <= 0){
        std::cout <<  "Votre condition Physique est excellente."<< std::endl;
    }
    else if(result <= 5 ){
        std::cout << "Votre condition Physique est très bonne."<< std::endl;
    }
    else if(result <= 10 ){
        std::cout << "Votre condition Physique est bonne."<< std::endl;
    }
    else if(result <= 15 ){
        std::cout << "Votre condition Physique est moyenne."<< std::endl;
    }
    else if(result > 15 ){
        std::cout << "Votre condition Physique est faible."<< std::endl;
    }
}

void Form::setf0(int f0) {
    this->f0 = f0;
}

void Form::setf1(int f1) {
    this->f1 = f1;
}

void Form::setf2(int f2) {
    this->f2 = f2;
}

void Form::show() {
    std::cout << "[" << this->f0 << "," << this->f1 << "," << this->f2 << "]"<< std::endl;

}
