#include "Dyhotomia_class.h"
#include "Newton_class.h"
#include "func.h"
#include <iostream>
#include <iomanip>


using namespace std;
int main(){
    double a, b, eps;

    Dyhotomia_class * dyh = new Dyhotomia_class();
    Newton_class * newton = new Newton_class();

    std::cout << "Enter 3 values: FROM TO EPSILON\n>>>";
    cin >> a >> b >> eps;
    dyh->setVolumes(a,b);
    dyh->setTolerance(eps);
    double dyhs_ = dyh->solve();

    newton->setVolumes(a,b);
    newton->setTolerance(eps);
    double newtons_ = newton->solve();
   
    cout << "Dyhotomia method solving result: " << fixed << setprecision(15) << dyhs_ << endl;
    cout << "Newton methos solving result: " << fixed << setprecision(15) << newtons_ << endl;
    cout << "f(x_new): " << f(newtons_) << " f(x_dyh): " << f(dyhs_);
    delete dyh;
    delete newton;
    return 0;
}
