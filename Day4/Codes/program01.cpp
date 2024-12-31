#include<iostream>
using namespace std;

class Person {
    int age;

public:
    void setAge(int a) {
        if (a >= 0 && a <= 120) // Validation
            age = a;
        else
            throw invalid_argument("Invalid age");
    }

    int getAge() const {
        return age;
    }
};

int main(){
	Person p1;
	int age;
	cout<<"Enter a age :" ;
	cin>>age;
	p1.setAge(age);
	cout<<"Age of person :"<<p1.getAge();



	return 0;
}

