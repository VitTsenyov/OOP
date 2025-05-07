#include "Dyhotomia_class.h"
#include "func.h"
#include <iostream>
using namespace std;

Dyhotomia_class::Dyhotomia_class(){}
Dyhotomia_class::~Dyhotomia_class(){}

void Dyhotomia_class::setVolumes(double vol_a, double vol_b){
    _a = vol_a;
    _b = vol_b;
}

void Dyhotomia_class::setTolerance(double vol_eps){
    _eps = vol_eps; 
}

double Dyhotomia_class::solve(){
    double c;
    if(f(_a) * f(_b) > 0){
        cout << "Solution doesn't exist!\n";
        return -1;
    }
    do{
        c = (_a + _b) / 2;
        if(f(_a) * f(c) < 0)
            _b = c;  
        else
            _a = c;   
    }
    while(std::abs(_b-_a) > _eps);
    return (_a+_b)/2;
}

