#include<iostream>
#include<cmath>
using namespace std;
 
class circle{
    private:
    double radius;     // it only accesed by class member only

    public:
    
    circle(double radius){
        this->radius=radius;
    }

    double area(){
        return 3.14 * pow(radius,2);
    }

};

int main(){
    double radius;
    cout<<"enter a radius :";
    cin>>radius;
    circle c1(radius);
    cout<<"area of circle :" << c1.area();
    
}

