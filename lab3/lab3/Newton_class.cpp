#include "Newton_class.h"   
#include "func.h"
#include <iostream>
#include <cmath>
using namespace std;

Newton_class::Newton_class(){}
Newton_class::~Newton_class(){}

void Newton_class::setVolumes(double vol_a, double vol_b) {
    a = vol_a;
    b = vol_b;
}

void Newton_class::setTolerance(double vol_eps) {
    eps = vol_eps;
}

double Newton_class::solve(){
    double x = (a+b) / 2;
    double x_next;
    double px=0;
    for(int i = 1; i < 1000; i++){

        x_next = x - f(x) / f_prime(x);
        if(fabs(f(x) - f_prime(px)) < eps){
            return x_next;
        }
        px = x;
        x = x_next;
    }
    cout << "max number of iteration" << endl;
    return x; 
}



